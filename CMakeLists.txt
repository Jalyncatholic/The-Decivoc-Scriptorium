cmake_minimum_required(VERSION 3.10)

# The name of your project
project("DecivocBlacksmith")

# Use C++17 to handle the phonetic logic and memory management efficiently
set(CMAKE_CXX_STANDARD 17)

# Define where your source code is located
# Adjust 'src/main.cpp' if your file has a different name
add_executable(blacksmith 
    src/main/cpp/main.cpp 
    src/main/cpp/parser.cpp
)

# This ensures the compiler can find your "Bridge Protocol" logic
target_include_directories(blacksmith PUBLIC src/main/cpp/include)

# Link math libraries (necessary for future Ribbon Brush vector math)
target_link_libraries(blacksmith android log m)
