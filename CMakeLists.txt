cmake_minimum_required(VERSION 3.16)
project(demos)

set(CMAKE_CXX_STANDARD 17)

add_executable(demos main.cpp)
set_property(TARGET demos PROPERTY RULE_LAUNCH_COMPILE "${CMAKE_COMMAND} -E time")