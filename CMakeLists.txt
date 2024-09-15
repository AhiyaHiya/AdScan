cmake_minimum_required(VERSION 3.26)
project(AdScan
    VERSION 0.1.0.0
    DESCRIPTION "Advertisement detector"
    LANGUAGES CXX
)

# C17 and C++20
set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 20)

add_subdirectory(Source)