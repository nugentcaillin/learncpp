cmake_minimum_required(VERSION 3.31.5...3.31.5)
project(basic_debugging)
add_executable(basic_debugging main.cpp)
add_compile_options(-Wall -Weffc++ -Wextra -Wconversion -Werror)
set_property(TARGET basic_debugging PROPERTY CXX_STANDARD 20)
