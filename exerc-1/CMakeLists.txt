cmake_minimum_required(VERSION 3.10)

project(ex1)
add_executable(sort sort.c) 
add_executable(sort-o sort-o.c)
target_link_libraries(sort) 
