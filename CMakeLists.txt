cmake_minimum_required(VERSION 3.20)
project(cpptest)
set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES omni.cpp omni_wheel.h test_p.cpp)

add_executable(cpptest ${SOURCE_FILES})
