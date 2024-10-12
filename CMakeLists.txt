# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)
project (Easy_tx)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_STANDARD 99)
# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()


include_directories(app/
	app/main-app/
	app/unit-test/
	boad/
	board/log/
	lib/
	lib/observer/
	service/
	service/log/
	)

add_subdirectory (lib/observer)
add_subdirectory (app/main-app)
add_subdirectory (app/unit-test/test-observer)
add_subdirectory (app/unit-test/test-log)
add_subdirectory (board)
add_subdirectory (board/log)

