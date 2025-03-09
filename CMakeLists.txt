cmake_minimum_required(VERSION 3.20)

project (cmake_exam1 VERSION 1.0 LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED TRUE)

add_compile_options(-Wall -Wextra -pedantic)

add_executable(cmake_exam1_exec main.c)

add_library(library_developer_info STATIC developer_group.c developer.c)  
target_include_directories(library_developer_info PUBLIC include)

add_executable(cmake_exam1_exec main.c)
target_link_libraries(cmake_exam1_exec PRIVATE library_developer_info)



