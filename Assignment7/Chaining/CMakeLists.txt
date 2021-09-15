cmake_minimum_required(VERSION 3.16)
project(Chaining C)

set(CMAKE_C_STANDARD 11)

add_executable(Chaining main.c hashTable.c hashTable.h io.c io.h list.c list.h files.h)