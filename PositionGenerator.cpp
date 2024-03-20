//
// Created by Philipp Brandtner on 07.05.2022.
//

#include <thread>
#include "PositionGenerator.h"

CPositionGenerator::CPositionGenerator(const unsigned int numSensors, const double posMin, const double posMax, const double noiseLevel, const double maxVelocity, const unsigned int publishFrequency) :
    m_DistrPosition_X_Y(std::uniform_real_distribution<> (posMin, posMax)),
    m_DistrPosition_Z(std::uniform_real_distribution<> (1.8, 2.2)),     // Range of Sensor in z Axis
    m_DistrNoise(std::uniform_real_distribution<> (-noiseLevel, noiseLevel)),
    m_publishFrequency(publishFrequency),
    m_maxDeviation(maxVelocity * (1/publishFrequency)),
    m_posMin(posMin),
    m_posMax(posMax)
{
    m_sock = zmq::socket_t(m_ctx, zmq::socket_type::push);
    m_sock.bind("tcp://127.0.0.1:10001");

    std::random_device rd; // obtain a random number from hardware
    m_pGen = std::make_unique<std::mt19937>(rd()); // seed the generator

    // Initialize Sensors and set initial position
    Data3d position3D;
    m_Sensors.reserve(numSensors);
    for (uint64_t i = 0; i < numSensors; ++i)
    {
        position3D.set_x(m_DistrPosition_X_Y(*m_pGen));
        position3D.set_y(m_DistrPosition_X_Y(*m_pGen));
        position3D.set_z(m_DistrPosition_Z(*m_pGen));
        m_Sensors.emplace_back(i, getTimestamp(), position3D);
    }

    // Update distribution range to +- maxDeviation
    m_DistrPosition_X_Y = std::uniform_real_distribution<> (-m_maxDeviation, m_maxDeviation);
}

/**
 * Method: Infinite loop to generate data and publish
 * */
void CPositionGenerator::runInfinite()
{
    while(1)
    {
        for(auto& Sensor: m_Sensors) {
            Sensor.updateData(getTimestamp(), generateRandomPositionData(Sensor.getPosition()));
            publishData(Sensor);
        }
        std::this_thread::sleep_for(static_cast<std::chrono::milliseconds>(1000/m_publishFrequency));
    }
}

/**
 * Method: Generate a new position and check if position is valid using max deviation and max, min for x, y positions
 * */
Data3d CPositionGenerator::generateRandomPositionData(Data3d currentPosition) {
    Data3d deltaPos;

    while(true)
    {
        deltaPos.set_x(m_DistrPosition_X_Y(*m_pGen));
        deltaPos.set_y(m_DistrPosition_X_Y(*m_pGen));
        deltaPos.set_z(m_DistrPosition_Z(*m_pGen));

        double positionDeviation = sqrt(pow(deltaPos.x(),2) + pow(deltaPos.y(),2));
        if (isPositionValid(positionDeviation,  currentPosition.x() + deltaPos.x(), currentPosition.y() + deltaPos.y()))
            break;
    }

    Data3d newPosition;
    newPosition.set_x(currentPosition.x() + deltaPos.x());
    newPosition.set_y(currentPosition.y() + deltaPos.y());
    newPosition.set_z(deltaPos.z());

    return newPosition;
}

/**
 * Method: Publish data of Sensor and add noise
 * */
void CPositionGenerator::publishData(const CSensor& Sensor) {
    auto noisePosition = std::make_unique<Data3d>(Sensor.getPosition());

    // Add noise to sensor position
    noisePosition->set_x( noisePosition->x() + m_DistrNoise(*m_pGen));
    noisePosition->set_y( noisePosition->y() + m_DistrNoise(*m_pGen));
    noisePosition->set_z( noisePosition->z() + m_DistrNoise(*m_pGen));

    GeneratedPosition gPos;
    gPos.set_sensorid(Sensor.getID());
    gPos.set_timestamp_usec(Sensor.getTimestamp());
    gPos.set_allocated_position(noisePosition.release());

    auto bytes = gPos.ByteSizeLong();
    zmq::message_t z_out(bytes);
    gPos.SerializeToArray(z_out.data(), bytes);
    m_sock.send(z_out, zmq::send_flags::dontwait);
}


