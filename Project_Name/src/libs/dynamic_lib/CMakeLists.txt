cmake_minimum_required (VERSION 3.1)

project(sortingLib)

#	set the library's headers
set(LIB_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

#	get all library's sources
file(GLOB LIB_SOURCES src/*.cpp)

#	export the binary results to bin folder inside the build dir
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

#	export the binary results to bin folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bin)

#	export the binary results to bin folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})

#	create the shared Library's binary sortingLib.dll
add_library(${PROJECT_NAME} SHARED ${LIB_SOURCES})

#	link all needed headers
target_include_directories (${PROJECT_NAME} PUBLIC ${LIB_INCLUDE_DIR})

#	link all needed libraries
target_link_libraries(${PROJECT_NAME} PUBLIC filesLib gtest gtest_main)