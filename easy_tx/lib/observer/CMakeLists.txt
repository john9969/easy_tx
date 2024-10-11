# CMakeList.txt : CMake project for easy_tx, include source and define
# project specific logic here.
#

# Add source to this project's executable.
cmake_minimum_required (VERSION 3.13)

project(test_observer)
if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET easy_tx PROPERTY CXX_STANDARD 20)
endif()

set(SOURCE_OBSERVER
    "observer.h"
    "observer.cpp"
)
add_executable (test_observer ${SOURCE_OBSERVER} "test-observer.cpp")

# TODO: Add tests and install targets if needed.
