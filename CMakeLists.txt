cmake_minimum_required(VERSION 4.2)
project(untitled C)

set(CMAKE_C_STANDARD 23)

add_library(queue STATIC src/queue.c)
target_include_directories(queue PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)

add_executable(necs src/main.c)
target_include_directories(necs PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)
target_link_libraries(necs PRIVATE queue)