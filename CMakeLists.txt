cmake_minimum_required(VERSION 3.0)
project(brain)
set(CMAKE_CXX_STANDARD 11)

add_library(brain
    src/layer.cpp src/layer.hpp
    src/neuron.cpp src/neuron.hpp
    src/activation.cpp src/activation.hpp)