cmake_minimum_required(VERSION 3.29)
project(cpp-image-segmentation)

set(CMAKE_CXX_STANDARD 20)

# Set OpenCV directory manually if required
set(OpenCV_DIR /usr/share/OpenCV)  # Adjust this path if necessary

# Find OpenCV package
find_package(OpenCV REQUIRED)

# Include OpenCV headers
include_directories(${OpenCV_INCLUDE_DIRS})

# Enable OpenMP
find_package(OpenMP REQUIRED)
if (OpenMP_CXX_FOUND)
    set(OpenMP_LIB OpenMP::OpenMP_CXX)
endif ()

# Create the executable
add_executable(cpp-image-segmentation src/main.cpp
        src/util/image_util.cpp
        src/util/image_util.h
        src/algorithm/image_processing.h
        src/algorithm/threshold.cpp
        src/algorithm/edge_detection.cpp
        src/algorithm/convert_to_gray_scale.cpp
)

# Link OpenCV libraries to the executable
target_link_libraries(cpp-image-segmentation ${OpenCV_LIBS} ${OpenMP_LIB})

