cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

include_directories("./")
set(CMAKE_CXX_FLAGS "-std=c++0x")
add_executable(Game main.cpp Room.cpp Thing.cpp Agent.cpp Player.cpp Game.cpp)
