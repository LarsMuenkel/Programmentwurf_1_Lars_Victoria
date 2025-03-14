# minimum required version of cmake is 3.20
cmake_minimum_required(VERSION 3.20)

# crating a project with name exam1 and in C
project (exam1 VERSION 1.0 LANGUAGES C)

# setting the standard to C11 and making it required
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED TRUE)

# add some compile options
add_compile_options(-Wall -Wextra -pedantic -Wno-stringop-overread)

# add the library for developer and developer_group functions
add_library(developer_info_lib STATIC src/developer_group.c src/developer.c)  
# add the includes to the library
target_include_directories(developer_info_lib PUBLIC include)

# add the executable and assign files to it
add_executable(exam1_exec src/main.c)

# add the include directory 
target_include_directories(exam1_exec PRIVATE include)
# link the library to the executable
target_link_libraries(exam1_exec PRIVATE developer_info_lib)



