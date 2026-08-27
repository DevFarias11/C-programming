cmake_minimum_required(VERSION 3.20)
project(c_programming CXX)

set(CMAKE_CXX_STANDARD 20)

# Alvo 1: Exercício de Avaliação de Notas
add_executable(grade_evaluation Conditionals/grade_evaluation.cpp)

# Alvo 2: Exercício de Control Flow
add_executable(control_flow "Conditionals/Control flow.cpp")
