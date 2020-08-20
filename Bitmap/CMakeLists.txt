set(THIS bitmap)

set(SOURCE Source/bitmap.cpp
           Include/bitmap.hpp
           Include/bitmap_file_header.hpp
           Include/bitmap_information_header.hpp
           Include/color.hpp)

set (CMAKE_CXX_STANDARD 17)

add_executable(${THIS} ${SOURCE})

target_include_directories(${THIS} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Include)
