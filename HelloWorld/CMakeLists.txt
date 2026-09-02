cmake_minimum_required(VERSION 4.3)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 20)

# This creates a separate configuration for your new file
add_executable(main main.cpp)

# This creates a configuration for another file (within same project)
add_executable(printHello main_printHelloWorld.cpp)

# More practice
add_executable(practice1 practiceBasics1.cpp)
