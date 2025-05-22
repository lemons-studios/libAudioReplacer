cmake_minimum_required(VERSION 4.0)
project(libAudioReplacer)
set(CMAKE_CXX_STANDARD 23)
find_package(Boost REQUIRED)

set(LIBRARY_SOURCES ProjectFileUtils.cpp ProjectFileUtils.hpp
        AudioTranscriptionUtils.cpp
        AudioTranscriptionUtils.hpp
        CommonUtils.cpp
        CommonUtils.hpp)
add_library(AudioReplacer SHARED ${LIBRARY_SOURCES})
