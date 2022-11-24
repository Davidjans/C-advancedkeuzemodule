cmake_minimum_required(VERSION 3.23)
project(Opdracht1)

set(CMAKE_CXX_STANDARD 23)

add_executable(Opdracht1 Source/main.cpp Source/Bank.cpp Headers/Bank.h Source/BankAccount.cpp Headers/BankAccount.h Source/Transaction.cpp Headers/Transaction.h)
