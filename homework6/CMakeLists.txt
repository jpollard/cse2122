cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

include_directories("./")
set(CMAKE_CXX_FLAGS "-std=c++0x")
add_executable(Bank main.cpp BankAccount.cpp CDAccount.cpp MoneyMarketAccount.cpp)
