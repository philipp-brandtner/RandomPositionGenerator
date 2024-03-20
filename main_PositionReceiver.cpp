#include <iostream>
#include <zmq.hpp>
#include "message.pb.h"

bool isPositionValid(const double x, const double y) {
    return x >= -0.3 && x <= 100.3 &&
           y >= -0.3 && y <= 100.3;
}

int main() {
    zmq::context_t ctx;
    zmq::socket_t sock(ctx, zmq::socket_type::pull);
    sock.connect("tcp://127.0.0.1:10001");
    GeneratedPosition genPos;

    do
    {
        zmq::message_t z_in;
        sock.recv(z_in);

        genPos.ParseFromArray(z_in.data(), z_in.size());

        std::cout << std::endl
                  << "ID: " << genPos.sensorid() << std::endl
                  << "Timestamp: " << genPos.timestamp_usec() << std::endl
                  << "x: " << genPos.position().x() << std::endl
                  << "y: " << genPos.position().y() << std::endl
                  << "z: " << genPos.position().z() << std::endl;


    } while(isPositionValid(genPos.position().x(), genPos.position().y()));
    return 0;
}
