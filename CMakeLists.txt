# Set minimum version of CMake.
cmake_minimum_required(VERSION 3.10)

# Set project name and version
project(simple-graphic-creator VERSION 1.2.3 LANGUAGES CXX)

# Library sources
add_subdirectory(Bitmap)

add_subdirectory(TestApp)
