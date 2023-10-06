cmake_minimum_required(VERSION 3.26)
project(head_first_design)

set(CMAKE_CXX_STANDARD 23)

set(SOURCE_FILES main.cpp)
add_executable(head_first_design_run ${SOURCE_FILES})

include_directories(source)
add_subdirectory(source)
target_link_libraries(head_first_design_run source)

add_subdirectory(test)


