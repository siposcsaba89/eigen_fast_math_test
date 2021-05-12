cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

project(test_mat_inverse)

option(USE_FAST_MATH "Enable fast math compiler flag" ON)

find_package(Eigen3 REQUIRED CONFIG)

add_executable(${PROJECT_NAME} main.cpp)
if (USE_FAST_MATH)
    target_compile_options(${PROJECT_NAME} PRIVATE $<$<CXX_COMPILER_ID:GNU,Clang>:-ffast-math>)
endif()

target_link_libraries(${PROJECT_NAME} PRIVATE Eigen3::Eigen)
