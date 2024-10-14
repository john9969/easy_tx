# CMakeList.txt : CMake project for easy_tx, include source and define
# project specific logic here.
#

# Add source to this project's executable.
cmake_minimum_required (VERSION 3.13)
project(ScreenShot)


set(SOURCE_SCREENSHOT
    "ScreenShot.h"
    "ScreenShot.cpp"
)
add_library (screenShot STATIC ${SOURCE_SCREENSHOT})
# TODO: Add tests and install targets if needed.