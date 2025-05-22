cmake_minimum_required(VERSION 3.31)
project(libAudioReplacer)

set(CMAKE_CXX_STANDARD 23)

find_package(Boost REQUIRED)

set(LIBRARY_SOURCES
        ProjectFileUtils.cpp
)

add_library(AudioReplacer SHARED ${LIBRARY_SOURCES})
