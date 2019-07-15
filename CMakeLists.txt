cmake_minimum_required (VERSION 3.1.0)
project (Resolver)

set(CMAKE_CXX_STANDARD 14)
add_executable(main FSR.cpp CombFuncReg.cpp FuncReg.cpp main.cpp)
