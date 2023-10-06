project(head_first_design_test)
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(test_run
        test_cases/Chapter_1/Test_Duck.cc
        test_cases/Chapter_2/Test_WeatherData.cc
)

target_link_libraries(test_run source)
target_link_libraries(test_run gtest gtest_main)