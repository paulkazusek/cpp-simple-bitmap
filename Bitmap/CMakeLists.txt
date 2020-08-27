cmake_minimum_required(VERSION 3.10)

project(Bitmap VERSION 0.0.0 DESCRIPTION "simple lib to create bitmaps" LANGUAGES CXX)

set(CMAKE_BUILD_TYPE Release)

set(SOURCES Source/bitmap.cpp)

set(HEADERS Include/bitmap.hpp
            Include/bitmap_file_header.hpp
            Include/bitmap_information_header.hpp
            Include/color.hpp
            Include/pixel_format.hpp
            Include/point.hpp)

INCLUDE_DIRECTORIES(
	./Include
)

add_library(Bitmap STATIC ${SOURCES} ${HEADERS})

# Enabling C++17
set_target_properties(Bitmap PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)