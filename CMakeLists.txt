cmake_minimum_required(VERSION 3.15)
project(VampireNumbers VERSION 0.1.0 LANGUAGES CXX)

# Executable setup
add_executable(vampire_numbers)
target_sources(vampire_numbers
    PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/main.cpp"
)

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

# Linking
target_link_libraries(vampire_numbers
    PRIVATE
        vampire_nums_lib
)
