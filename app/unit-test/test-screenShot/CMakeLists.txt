# CMakeList.txt : CMake project for easy_tx, include source and define
# project specific logic here.
#

# Add source to this project's executable.
cmake_minimum_required (VERSION 3.13)

project(test_screenShot)


add_executable (test_screenShot main.cpp)
target_link_libraries(test_screenShot screenShot si_ScreenShot)
# TODO: Add tests and install targets if needed.