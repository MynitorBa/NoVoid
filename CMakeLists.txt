cmake_minimum_required(VERSION 3.16)
project(clicker)

set(CMAKE_CXX_STANDARD 20)

# Buscar SFML instalado por vcpkg
find_package(SFML REQUIRED COMPONENTS System Window Graphics)

# Crear ejecutable
add_executable(clicker clicker.cpp)

# Enlazar bibliotecas SFML
target_link_libraries(clicker 
    SFML::System 
    SFML::Window 
    SFML::Graphics
)