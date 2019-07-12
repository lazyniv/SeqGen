cmake_minimum_required (VERSION 3.1.0)
project (Resolver)

set(CMAKE_CXX_STANDARD 14)
add_executable(main LFSR.cpp NFSR.cpp CombFuncReg.cpp FuncReg.cpp MixedFuncReg.cpp main.cpp)
add_executable(xortest LFSR.cpp LinearCombXOR.cpp)
