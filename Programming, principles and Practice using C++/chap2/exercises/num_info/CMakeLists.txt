cmake_minimum_required(VERSION 3.31.5...3.31.5)
project(num_info)
add_executable(num_info main.cpp)
add_compile_options(-Wall -Weffc++ -Wextra -Wconversion -Werror)
set_property(TARGET num_info PROPERTY CXX_STANDARD 20)
