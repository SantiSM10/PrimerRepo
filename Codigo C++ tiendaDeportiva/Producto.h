#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <string>

class Producto {
private:
    std::string nombre;
    float precio;
    int stock;

public:
    Producto(std::string nombre, float precio, int stock);

    std::string getNombre() const;
    float getPrecio() const;
    int getStock() const;

    void modificarStock(int cantidad);
};

#endif
