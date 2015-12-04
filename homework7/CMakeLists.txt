cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

include_directories("./")
set(CMAKE_CXX_FLAGS "-std=c++0x")
add_executable(Game main.cpp Agent.cpp Game.cpp Room.cpp Thing.cpp)
