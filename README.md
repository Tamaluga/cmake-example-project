# cmake-example-project

CMake based example project with unit tests based on the googletest framework.

## Prerequisites

### Without Docker

- [git](https://git-scm.com/downloads)
- [Visual Studio Code](https://code.visualstudio.com/)
- CMake
- Compiler like GCC

#### Installation

- Get the repo:
  ```ssh
  git clone https://github.com/Tamaluga/cmake-example-project
  ```

### With Docker

- [git](https://git-scm.com/downloads)
- [Docker Desktop](https://www.docker.com/get-started)
- [Visual Studio Code](https://code.visualstudio.com/)
  - Add Extension `ms-vscode-remote.remote-containers`

#### Installation

- Get the repo:
  ```ssh
  git clone https://github.com/Tamaluga/cmake-example-project
  ```
- Start `Docker Desktop`
- Open the project folder in VS Code.  
  Press `ctrl+shift+p` to open the command palette and enter `Remote-Containers: Reopen in Container`.

## Build

  ```
  cd path_to/cmake-example-project
  mkdir build
  cd build
  cmake -S .. -B .
  cmake --build .
  make
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

## Debug

To add debbug information to the binary the DCMAKE_BUILD_TYPE flag has to be set to debug in the cmake build step:
```
  cmake -DCMAKE_BUILD_TYPE=debug --build .
```
Then the debug session can be started wit 'F5'
