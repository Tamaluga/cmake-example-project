# cmake-example-project

CMake based example project with unit tests based on the googletest framework.

## Prerequisites

- CMake
- Compiler like GCC

## Build

  ```
  cd path_to/cmake-example-project
  mkdir build
  cd build
  cmake -S .. -B .
  cmake --build .
  ```

## Run

Run application:
  ```
  cd path_to/cmake-example-project/build
  ./app/cmake-example-project_app
  ```

Run tests:
```
cd path_to/cmake-example-project/build
./tests/cmake-example-project_tests
```