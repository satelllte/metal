add_library(METAL_CPP "metal.cpp")

target_include_directories(METAL_CPP PUBLIC "metal-cpp")
target_include_directories(METAL_CPP PUBLIC "metal-cpp-extensions")

target_link_libraries(METAL_CPP
  "-framework Metal"
  "-framework MetalKit"
  "-framework AppKit"
  "-framework Foundation"
  "-framework QuartzCore"
)