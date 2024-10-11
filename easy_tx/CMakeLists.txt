# CMakeList.txt : CMake project for easy_tx, include source and define
# project specific logic here.
#

# Add source to this project's executable.
cmake_minimum_required (VERSION 3.13)
add_executable (easy_tx "easy_tx.cpp" "easy_tx.h" "service/log/si_log.h" "service/log/si_log.cpp" "service/log/test-log.cpp" "lib/observer/observer.h" "lib/observer/observer.cpp" "lib/observer/test-observer.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET easy_tx PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
