# CMakeList.txt : CMake project for easy_tx, include source and define
# project specific logic here.
#

# Add source to this project's executable.
cmake_minimum_required (VERSION 3.13)
project(Log)


set(SOURCE_LOG
    "si_log.h"
    "si_log.cpp"
)
add_library (si_log STATIC ${SOURCE_LOG})

# TODO: Add tests and install targets if needed.
