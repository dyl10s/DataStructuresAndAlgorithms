cmake_minimum_required(VERSION 3.12)
project(hw3_LinkedList)

set(CMAKE_CXX_STANDARD 14)
set(SOURCE_FILES linked_list.hpp)

add_executable(HW3 linked_list.hpp list_tester.cpp linked_list.hpp)
