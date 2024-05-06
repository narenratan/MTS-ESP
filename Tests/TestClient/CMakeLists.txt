cmake_minimum_required(VERSION 3.15.0)

project(TestClient)

add_executable(${PROJECT_NAME} main.cpp ../../Client/libMTSClient.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE ../../Client)
