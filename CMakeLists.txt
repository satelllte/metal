cmake_minimum_required(VERSION 3.27)

set(CMAKE_CXX_STANDARD 20)

project(Illusion)

include(metal.cmake)

add_executable(${PROJECT_NAME} ./src/macos/main.cpp)
target_link_libraries(${PROJECT_NAME} METAL_CPP)

# --------------------
# TODO: complete configuration for iOS
# --------------------
# if (${DPLATFORM} STREQUAL "OS64")
#   add_executable(${PROJECT_NAME} ./src/ios/main.cpp)
# else()
#   add_executable(${PROJECT_NAME} ./src/macos/main.cpp)
# endif()