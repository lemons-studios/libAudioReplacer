cmake_minimum_required(VERSION 3.31)
project(libAudioReplacer)

set(CMAKE_CXX_STANDARD 23)

add_library(libAudioReplacer SHARED library.cpp)
