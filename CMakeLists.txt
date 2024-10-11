# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project (easy_tx)

# Include sub-projects.
add_subdirectory ("easy_tx")
add_subdirectory ("easy_tx/service/log")
add_subdirectory ("easy_tx/lib/observer")

target_include_directories(easy_tx PUBLIC ${CMAKE_SOURCE_DIR}/easy_tx/app)
target_include_directories(easy_tx PUBLIC ${CMAKE_SOURCE_DIR}/easy_tx/board)
target_include_directories(easy_tx PUBLIC ${CMAKE_SOURCE_DIR}/easy_tx/lib)
target_include_directories(easy_tx PUBLIC ${CMAKE_SOURCE_DIR}/easy_tx/lib/observer)

target_include_directories(easy_tx PUBLIC ${CMAKE_SOURCE_DIR}/easy_tx/service)
target_include_directories(easy_tx PUBLIC ${CMAKE_SOURCE_DIR}/easy_tx/service/log)

