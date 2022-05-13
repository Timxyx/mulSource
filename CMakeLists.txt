cmake_minimum_required(VERSION 3.18)
project(mulsource VERSION 1.0)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11 -Wall -Wextra")
set(CMAKE_C_STANDARD 11)


set(C_SRCS 
  ui.c
  circuit.c
  inventory.c
  interface.c
)

add_executable(${PROJECT_NAME} main.c ${C_SRCS})

