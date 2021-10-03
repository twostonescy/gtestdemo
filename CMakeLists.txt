cmake_minimum_required(VERSION 3.20)
project(clionCreate)
message(STATUS ${CMAKE_BINARY_DIR})

aux_source_directory(. DIR_SRCS)
add_subdirectory(math)
add_executable(clionCreate ${DIR_SRCS} )

target_link_libraries(clionCreate my_math)
