cmake_minimum_required(VERSION 3.31)
project(ProjetNotes C)

set(CMAKE_C_STANDARD 11)

set(PROJECT_HEADERS
		manipulation.h
		math.h
)

set(PROJECT_SOURCES
		manipulation.c
		math.c
		main.c
)

add_executable(ProjetNotes ${PROJECT_HEADERS} ${PROJECT_SOURCES})
