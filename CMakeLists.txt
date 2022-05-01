cmake_minimum_required(VERSION 3.22)

project(voice2vocaloid)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

set (CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/CMake")

add_subdirectory(src)

target_link_libraries(Voice2Vocaloid PUBLIC Voice2Midi Voice2Phoneme)
target_include_directories(Voice2Vocaloid PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/src"
                          )
