cmake_minimum_required(VERSION 4.2)
project(untitled C)

set(CMAKE_C_STANDARD 23)

add_executable(necs)

target_sources(
        necs
        PRIVATE
        src/main.c
        src/entity_manager.c
        src/queue.c
)

target_sources(
        necs
        PRIVATE
        inc/entity_manager.h
        inc/queue.h
        inc/utils.h
)

target_include_directories(
        necs
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/inc
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)
