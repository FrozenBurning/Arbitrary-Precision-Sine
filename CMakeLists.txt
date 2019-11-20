cmake_minimum_required(VERSION 2.8)

project (main)


include_directories(include)
aux_source_directory(src DIR_SRCS)
add_definitions("-Wall -g")

add_executable(${PROJECT_NAME} ${DIR_SRCS})
