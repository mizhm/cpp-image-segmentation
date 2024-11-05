cmake_minimum_required(VERSION 3.29)
project(untitledProject)

set(CMAKE_CXX_STANDARD 20)

# Set OpenCV directory manually if required
set(OpenCV_DIR /usr/share/OpenCV)  # Adjust this path if necessary

# Find OpenCV package
find_package(OpenCV REQUIRED)

# Include OpenCV headers
include_directories(${OpenCV_INCLUDE_DIRS})

# Create the executable
add_executable(untitledProject main.cpp)

# Link OpenCV libraries to the executable
target_link_libraries(untitledProject ${OpenCV_LIBS})
