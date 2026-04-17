cmake_minimum_required(VERSION 3.10)
project(DecivocBlacksmith)

# Set C++ standard to 17 for better memory management
set(CMAKE_CXX_STANDARD 17)

# Define the Blacksmith executable
add_executable(blacksmith src/main.cpp src/parser.cpp src/forge.cpp)

# Include directories for math libraries (used for Ribbon Brushes)
target_include_directories(blacksmith PUBLIC include)

