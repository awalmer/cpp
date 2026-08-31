cmake_minimum_required(VERSION 4.3)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 20)

# This creates a separate configuration for your new file
add_executable(PrintHello main.cpp)

# This creates a configuration for first file
add_executable(HelloWorld main_printHelloWorld.cpp)

# However... not sure how to run both of them. Maybe the console just prints main.
