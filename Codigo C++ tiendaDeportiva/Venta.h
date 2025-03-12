#ifndef VENTA_H
#define VENTA_H

#include <iostream>

class Venta {
private:
    int clienteID;
    std::string productoNombre;
    int cantidad;

public:
    Venta(int clienteID, std::string productoNombre, int cantidad);

    int getClienteID() const;
    std::string getProductoNombre() const;
    int getCantidad() const;
};

#endif

