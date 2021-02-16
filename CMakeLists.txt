cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

# Create CMake project
set(PROJECT "cmake-example-project")
project(${PROJECT} VERSION 1.0.0 LANGUAGES C CXX ASM)

# Set Language Standards
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Set names of needed components
set(APP "${PROJECT}_app")
set(TESTS "${PROJECT}_tests")
set(LIBRARY_CORE "${PROJECT}_core")

# Add libararies
add_subdirectory("core")
add_subdirectory("app")
add_subdirectory("tests")