# CMakeList.txt : CMake project for easy_tx, include source and define
# project specific logic here.
#

# Add source to this project's executable.

add_executable (easy_tx "easy_tx.cpp" "easy_tx.h" "service/log/log.h" "service/log/log.cpp" "service/log/main_test_log.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET easy_tx PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
