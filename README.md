# Metal

Apple's [Metal API](https://developer.apple.com/metal/cpp/) playground.

## Pre-requisites

- [CMake](https://cmake.org/)
- [Xcode](https://developer.apple.com/xcode/)

## Getting Started

Create Xcode project with CMake:

```sh
./create_xcode_project.sh
```

Open generated project:

```sh
open ./build/Illusion.xcodeproj
```

## Release build


Make sure `build` folder is empty. You can remove it with:

```sh
rm -rf build
```

Then, build the release build of the application:

```sh
./build_release.sh
```

it'll appear in `build/Release` folder.
