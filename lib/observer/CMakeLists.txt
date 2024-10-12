# CMakeList.txt : CMake project for easy_tx, include source and define
# project specific logic here.
#

# Add source to this project's executable.
cmake_minimum_required (VERSION 3.13)

project(Observer)

set(SOURCE_OBSERVER
    "observer.h"
    "observer.cpp"
)
add_library(observer STATIC ${SOURCE_OBSERVER})

# TODO: Add tests and install targets if needed.
