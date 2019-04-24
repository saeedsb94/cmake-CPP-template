cmake_minimum_required (VERSION 3.1)

project(tests)

#	get all apps's sources
file(GLOB APP_SOURCES *.cpp)



#	export the binary results to bin folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bin)

#	export the binary results to bin folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})

#	create the Library's binary filesLib.lib
add_executable(${PROJECT_NAME}  ${APP_SOURCES})

#	link all needed libraries
target_link_libraries(${PROJECT_NAME} PUBLIC filesLib sortingLib gtest gtest_main)

#	Get all test cases files
file(GLOB TEST_CASES */*.txt)

#	copy test files to build dir
file(COPY ${TEST_CASES} DESTINATION  ${CMAKE_CURRENT_BINARY_DIR}/docs)

#	copy test files to build dir
file(COPY ${TEST_CASES} DESTINATION  ${CMAKE_CURRENT_BINARY_DIR}/bin/docs)

 ADD_CUSTOM_COMMAND(TARGET ${PROJECT_NAME}
                       POST_BUILD
                        COMMAND ${CMAKE_COMMAND} -E copy
                        ../libs/dynamic_lib/bin/sortingLib.dll
                       ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
                       )