cmake_minimum_required(VERSION 4.2)
project(untitled C)

set(CMAKE_C_STANDARD 23)

add_library(queue src/queue.c)
target_include_directories(queue PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)

add_library(entity_manager src/entity_manager.c)
target_include_directories(entity_manager PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)

add_executable(necs src/main.c)
target_include_directories(necs PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)
target_link_libraries(necs PRIVATE queue)
