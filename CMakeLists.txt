cmake_minimum_required(VERSION 3.10)
project(bases_prog_ryan C)

set(CMAKE_C_STANDARD 99)

# Adiciona o primeiro executável
add_executable(calculadora main.c)

# Adiciona o segundo executável
add_executable(numero_primo main2.c)
