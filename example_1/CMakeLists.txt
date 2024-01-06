cmake_minimum_required(VERSION 3.10)

project(semple VERSION 0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(semple_config.h.in semple_config.h)

add_executable(semple main.cpp)

target_include_directories(semple PUBLIC
                            ${PROJECT_BINARY_DIR}
                            ${PROJECT_SOURCE_DIR}/my_library
                            )

target_link_libraries(semple PUBLIC MyLibrary)

add_subdirectory(my_library)