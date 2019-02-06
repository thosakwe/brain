cmake_minimum_required(VERSION 3.0)
project(brain)
set(CMAKE_CXX_STANDARD 11)

add_library(brain
    src/brain/layer.cpp src/brain/layer.hpp
    src/brain/neuron.cpp src/brain/neuron.hpp
    src/brain/activation.cpp src/brain/activation.hpp src/brain/network.cpp src/brain/network.hpp
    src/brain/connection.cpp src/brain/connection.hpp
    src/brain/connection_builder.cpp src/brain/connection_builder.h src/brain/brain.hpp src/brain/sigmoid.cpp src/brain/sigmoid.hpp)

add_executable(example example/main.cpp)
target_include_directories(example PUBLIC src)