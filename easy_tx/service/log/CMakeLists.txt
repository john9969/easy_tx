# CMakeList.txt : CMake project for easy_tx, include source and define
# project specific logic here.
#

# Add source to this project's executable.
project(test_log)

set(CMAKE_CXX_STANDARD 20)
set(SOURCE_LOG
    log.h
    log.cpp
)
add_executable (test_log ${SOURCE_LOG} "main_test_log.cpp")

# TODO: Add tests and install targets if needed.
