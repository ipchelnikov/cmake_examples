cmake_minimum_required(VERSION 3.10)

project(semple VERSION 0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# TODO 8: Use configure_file to configure and copy TutorialConfig.h.in to
#         TutorialConfig.h

configure_file(semple_config.h.in semple_config.h)

add_executable(semple main.cpp)

# TODO 9: Use target_include_directories to include ${PROJECT_BINARY_DIR}
