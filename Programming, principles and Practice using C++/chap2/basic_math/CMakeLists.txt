cmake_minimum_required(VERSION 3.31.5...3.31.5)
project(basic_math)
add_executable(basic_math main.cpp)
add_compile_options(-Wall -Weffc++ -Wextra -Wconversion -Werror)
set_property(TARGET basic_math PROPERTY CXX_STANDARD 20)
