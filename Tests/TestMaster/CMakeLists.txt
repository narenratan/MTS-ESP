cmake_minimum_required(VERSION 3.15.0)

project(TestMaster)

add_executable(${PROJECT_NAME} main.cpp ../../Master/libMTSMaster.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE ../../Master)
