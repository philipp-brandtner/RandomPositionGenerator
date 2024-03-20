//
// Created by Philipp Brandtner on 07.05.2022.
//

#pragma once
#include <vector>
#include <cstdint>
#include <random>
#include <memory>
#include <zmq.hpp>
#include <chrono>

#include "message.pb.h"

class CSensor {
public:
    CSensor(const uint64_t ID, uint64_t timestamp_usec, Data3d data3D) {
        auto posData = std::make_unique<Data3d>(data3D);
        m_generatedPosition.set_sensorid(ID);
        m_generatedPosition.set_timestamp_usec(timestamp_usec);
        m_generatedPosition.set_allocated_position(posData.release());
    };
    void updateData(const uint64_t timestamp_usec, Data3d newPos) {
        *m_generatedPosition.mutable_position() = newPos;
        m_generatedPosition.set_timestamp_usec(timestamp_usec);
    };

    uint64_t getID() const { return m_generatedPosition.sensorid(); };
    uint64_t getTimestamp() const { return m_generatedPosition.timestamp_usec(); };
    Data3d getPosition() const { return m_generatedPosition.position(); };
private:
    GeneratedPosition m_generatedPosition;
};

class CPositionGenerator {
public:
    CPositionGenerator(const unsigned int numSensors, const double posMin, const double posMax, const double noiseLevel,
                       const double maxVelocity, const unsigned int publishFrequency);
    ~CPositionGenerator() {};

    void runInfinite();
private:
    std::vector<CSensor> m_Sensors;
    const unsigned int m_publishFrequency;
    const double m_maxDeviation;
    const double m_posMin;
    const double m_posMax;

    std::unique_ptr<std::mt19937> m_pGen; // seed the generator
    std::uniform_real_distribution<> m_DistrPosition_X_Y;
    std::uniform_real_distribution<> m_DistrPosition_Z;
    std::uniform_real_distribution<> m_DistrNoise;

    zmq::context_t m_ctx;
    zmq::socket_t m_sock;

    Data3d generateRandomPositionData(Data3d currentPosition);
    void publishData(const CSensor& Sensor);

    /* Helper Functions */
    uint64_t getTimestamp() { return std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::system_clock::now().time_since_epoch()).count(); };
    bool isPositionValid(const double positionDeviation, const double x, const double y) {
        return positionDeviation <= m_maxDeviation &&
        x >= m_posMin && x <= m_posMax &&
        y >= m_posMin && y <= m_posMax;
    }
};
