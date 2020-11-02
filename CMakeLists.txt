cmake_minimum_required(VERSION 3.17)
project(MethematicalOperations)

set(CMAKE_CXX_STANDARD 14)

add_library(MathematicalOperations src/Operations.cpp)
target_include_directories(MathematicalOperations PRIVATE include/)

enable_testing()

add_executable(testFactorials tests/TestFactorial.cpp)
target_link_libraries(testFactorials MathematicalOperations)
target_include_directories(testFactorials PRIVATE include)

add_test(TestFactorials1 testFactorials 1 1)
add_test(TestFactorials2 testFactorials 2 2)
add_test(TestFactorials3 testFactorials 3 6)
add_test(TestFactorials4 testFactorials 4 24)
add_test(TestFactorials5 testFactorials 5 120)
