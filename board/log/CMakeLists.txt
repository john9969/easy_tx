# CMakeList.txt : CMake project for easy_tx, include source and define
# project specific logic here.
#

# Add source to this project's executable.
cmake_minimum_required (VERSION 3.13)
project(Log)


set(SOURCE_LOG
    log.h
    log.cpp
)
add_library (log STATIC ${SOURCE_LOG})
# TODO: Add tests and install targets if needed.
