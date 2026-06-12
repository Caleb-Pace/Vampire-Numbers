cmake_minimum_required(VERSION 3.23)
project(VampireNumbers VERSION 0.1.0 LANGUAGES CXX)

# Use the C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Library setup
add_library(vampire_nums_lib)
target_sources(vampire_nums_lib
    PRIVATE
        src/vampire.cpp

    PUBLIC
        FILE_SET HEADERS
        BASE_DIRS
            include
        FILES
            include/vampire_nums/vampire.hpp
)

# Executable setup
add_executable(vampire_numbers)
target_sources(vampire_numbers
    PRIVATE
        main.cpp
)

# Linking
target_link_libraries(vampire_numbers
    PRIVATE
        vampire_nums_lib
)
