cmake_minimum_required(VERSION 3.23)
project(Opdracht4)

set(CMAKE_CXX_STANDARD 23)

add_executable(Opdracht4 main.cpp Component.cpp Component.h Decorator.cpp Decorator.h RaceDecorator.cpp RaceDecorator.h NPCComponent.cpp NPCComponent.h RoleDecorator.cpp RoleDecorator.h)
