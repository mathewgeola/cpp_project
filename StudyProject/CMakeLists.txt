cmake_minimum_required(VERSION 3.10)
project(StudyProject)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES
        ${CMAKE_SOURCE_DIR}/src/main.cpp
        ${CMAKE_SOURCE_DIR}/src/space.cpp
)

add_executable(StudyProject
        ${SOURCES}
)
