cmake_minimum_required(VERSION 3.15)
project(VampireNumbers VERSION 0.1.0 LANGUAGES CXX)

add_executable(vampire_numbers)

target_sources(vampire_numbers
    PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/main.cpp"
)
