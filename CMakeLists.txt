cmake_minimum_required(VERSION 3.15)
project(TNSTOUR)

set(CMAKE_CXX_STANDARD 14)

# Set the output directories for compiled files
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Include directories for header files
include_directories(src/declarations)

# Add your source files
file(GLOB_RECURSE SOURCES
    "src/codes/definitions/*.cpp"
    "src/codes/test/*.cpp"
    "src/codes/*.cpp"
)

# Create the executable
add_executable(TNSTOUR ${SOURCES})