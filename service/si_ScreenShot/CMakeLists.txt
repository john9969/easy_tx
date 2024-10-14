# CMakeList.txt : CMake project for easy_tx, include source and define
# project specific logic here.
#

# Add source to this project's executable.
cmake_minimum_required (VERSION 3.13)
project(SI_ScreenShot)


set(SOURCE_SI_SCREENSHOT
    "si_ScreenShot.h"
    "si_ScreenShot.cpp"
)
add_library (si_ScreenShot STATIC ${SOURCE_SI_SCREENSHOT})

# TODO: Add tests and install targets if needed.
