cmake_minimum_required(VERSION 3.10)
project(qt_demo VERSION 1.0)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find Qt5 packages
find_package(Qt5 COMPONENTS Widgets REQUIRED)

# Add executable
add_executable(qt_demo 
    src/main.cpp
)

# Link Qt libraries
target_link_libraries(qt_demo 
    Qt5::Widgets
)

# Enable Qt's MOC preprocessor
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
