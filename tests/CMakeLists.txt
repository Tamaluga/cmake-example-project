# Tests

# Set names of needed components
set(TARGET "${TESTS}")

# Includes
include(CTest)
enable_testing()

# Add libraries
#add_subdirectory(googletest)
include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.8.0
)

FetchContent_GetProperties(googletest)
if(NOT googletest_POPULATED)
  FetchContent_Populate(googletest)
  add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})
endif()

# Sources
set(TEST_SOURCES "main.cpp")
set(TEST_FLAGS "-O0;-g")

# Add and configure target
add_executable(${TARGET} ${TEST_SOURCES})
target_link_libraries(${TARGET} PRIVATE 
    ${LIBRARY_CORE} 
    gtest 
    pthread
)
target_compile_options(${TARGET} PUBLIC ${TEST_FLAGS})
add_test(NAME ${LIBRARY_LIB}.${TARGET} COMMAND ${TARGET})