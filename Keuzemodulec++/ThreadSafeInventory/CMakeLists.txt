cmake_minimum_required(VERSION 3.24)
project(ThreadSafeInventory)

set(CMAKE_CXX_STANDARD 17)

add_executable(ThreadSafeInventory main.cpp Inventory.cpp Inventory.h)
