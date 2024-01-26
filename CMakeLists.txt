cmake_minimum_required(VERSION 3.27)

set(CMAKE_CXX_STANDARD 20)

project(
  Illusion
  VERSION 0.0.1
	LANGUAGES CXX C
)

include(metal.cmake)

add_executable(${PROJECT_NAME} ./src/main.cpp)
target_link_libraries(${PROJECT_NAME} METAL_CPP)

if(XCODE)
	set_target_properties(${PROJECT_NAME} PROPERTIES
		XCODE_GENERATE_SCHEME ON
		XCODE_SCHEME_ENABLE_GPU_FRAME_CAPTURE_MODE "Metal"
	)
endif()
