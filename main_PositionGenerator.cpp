#include <iostream>
#include "PositionGenerator.h"

int main() {
    constexpr unsigned int numSensors = 10;         // Number of Sensors
    constexpr unsigned int publishFrequency = 1;    // Frequency to publish data
    constexpr double posMin = 0.0;                  // Min x, y position
    constexpr double posMax = 100.0;                // Max x, y position
    constexpr double noiseLevel = 0.3;              // noise in the range of +- 30 cm to positions
    constexpr double maxVelocity = 6.94;            // maximum velocity of human players 25 km/h = 6,94 m/s

    std::cout << "Welcome to Random Position Generator" << std::endl <<
    "- Positions are generated for " << numSensors << " Sensors with " << publishFrequency << "Hz" << std::endl <<
    "- Data is published via tcp://127.0.0.1:10001 ZeroMQ Protocol Buffers messages" << std::endl << std::endl;

    CPositionGenerator posGen(numSensors, posMin, posMax, noiseLevel, maxVelocity, publishFrequency);
    posGen.runInfinite();

    return 0;
}
