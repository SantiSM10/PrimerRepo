cmake_minimum_required(VERSION 3.22)
project(TiendaDeportiva)

set(CMAKE_CXX_STANDARD 17)

add_executable(TiendaDeportiva
        main.cpp
        Producto.cpp
        Cliente.cpp
        Venta.cpp
        Tienda.cpp
)
