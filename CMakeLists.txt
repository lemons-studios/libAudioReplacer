cmake_minimum_required(VERSION 4.0)
project(libAudioReplacer)
set(CMAKE_CXX_STANDARD 23)
find_package(Boost REQUIRED)

set(LIBRARY_SOURCES
        src/ProjectFileUtils.cpp
        src/AudioTranscriptionUtils.cpp
        include/LibAudioReplacer.h
        src/InternalUtils.h)
add_library(AudioReplacer SHARED ${LIBRARY_SOURCES})
