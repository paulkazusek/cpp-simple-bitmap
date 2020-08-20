cmake_minimum_required(VERSION 3.15)

project(Bitmap VERSION 0.0.0 DESCRIPTION "simple lib to create bitmaps" LANGUAGES CXX)

set(CMAKE_BUILD_TYPE Release)

set(SOURCES Source/bitmap.cpp)

set(HEADERS Include/bitmap.hpp
            Include/bitmap_file_header.hpp
            Include/bitmap_information_header.hpp
            Include/color.hpp)

INCLUDE_DIRECTORIES(
	./Include
)

set (CMAKE_CXX_STANDARD 17)

add_library(Bitmap STATIC ${SOURCES} ${HEADERS})