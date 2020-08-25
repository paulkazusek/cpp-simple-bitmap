cmake_minimum_required(VERSION 3.10)

project(TestApp VERSION 0.0.1 LANGUAGES CXX)

include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}
	${CMAKE_CURRENT_BINARY_DIR}
        ../Bitmap/Include)

add_executable(TestApp Source/main.cpp)

# Enabling C++17
set_target_properties(Bitmap PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)

target_link_libraries(TestApp Bitmap)