cmake_minimum_required(VERSION 3.27)

set(CMAKE_CXX_STANDARD 20)

project(
  Illusion
  VERSION 0.0.1
	LANGUAGES CXX C
)

file(GLOB_RECURSE SOURCES_CPP "./src/*.h" "./src/*.cpp")
file(GLOB_RECURSE SOURCES_SHADERS "./src/*.metal")
add_executable(${PROJECT_NAME} ${SOURCES_CPP} ${SOURCES_SHADERS})
set_source_files_properties(${SOURCES_SHADERS} PROPERTIES LANGUAGE METAL)

include(metal.cmake)
target_link_libraries(${PROJECT_NAME} METAL_CPP)

set_target_properties(${PROJECT_NAME} PROPERTIES
	XCODE_GENERATE_SCHEME ON
	XCODE_SCHEME_ENABLE_GPU_FRAME_CAPTURE_MODE "Metal"
)
