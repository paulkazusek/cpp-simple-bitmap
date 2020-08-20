cmake_minimum_required(VERSION 3.9)

project(TestApp VERSION 0.0.1 LANGUAGES CXX)

include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}
	${CMAKE_CURRENT_BINARY_DIR}
        ../Bitmap/Include)

add_executable(TestApp Source/main.cpp)

target_link_libraries(TestApp Bitmap)