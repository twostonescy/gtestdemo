cmake_minimum_required(VERSION 3.20)
project(clionCreate)
message(STATUS ${CMAKE_BINARY_DIR})

#####################################################
#Unit clionCreate

add_subdirectory(math)
add_executable(clionCreate main.cpp)

target_link_libraries(clionCreate my_math)

#####################################################
#gTestDemo

#Unit test
project(gTestDemo)
add_subdirectory(third_party/googletest)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})

set(unittestSrc test_main.cpp test_src/testdemo.cpp )

add_executable(gTestDemo ${unittestSrc})
target_link_libraries(gTestDemo gtest gtest_main my_math gmock)


