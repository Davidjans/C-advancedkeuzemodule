cmake_minimum_required(VERSION 3.23)
project(Opdracht4)

set(CMAKE_CXX_STANDARD 23)

add_executable(Opdracht4 main.cpp NPC.cpp NPC.h Race.cpp Race.h Component.cpp Component.h Decorator.cpp Decorator.h ConcreteComponent.cpp ConcreteComponent.h)
