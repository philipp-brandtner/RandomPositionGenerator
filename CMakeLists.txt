cmake_minimum_required(VERSION 3.21)
project(PositionGenerator)

set(TARGET_GENERATOR PositionGenerator)
set(TARGET_RECEIVER PositionReceiver)

set(CMAKE_CXX_STANDARD 17)

set(SRC_Generator
        main_PositionGenerator.cpp
        PositionGenerator.cpp
        message.pb.cc
    )

set(INC_Generator
        PositionGenerator.h
        message.pb.h)

set(SRC_Receiver
        main_PositionReceiver.cpp
        message.pb.cc)

set(INC_Receiver
        message.pb.h)

add_executable(${TARGET_GENERATOR} ${INC_Generator} ${SRC_Generator})
add_executable(${TARGET_RECEIVER} ${INC_Receiver} ${SRC_Receiver})

target_link_libraries(${TARGET_GENERATOR} protobuf zmq)
target_link_libraries(${TARGET_RECEIVER} protobuf zmq)