# Set the minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Define the project name and version
project(ArithmeticLibrary VERSION 1.0)

# Specify the C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)


SET(CMAKE_INSTALL_RPATH_USE_LINK_PATH FALSE)

# Add an executable for the main program
add_executable(assignment2 main.c)

# Add library source files
add_library(arithmetic STATIC arithmetic/arithmetic.c)
add_library(tempconverter SHARED tempconverter/tempconverter.cpp )

# Link the example program with the static library
target_link_libraries(assignment2 arithmetic tempconverter)