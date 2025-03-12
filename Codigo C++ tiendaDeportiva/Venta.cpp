#include "Venta.h"

Venta::Venta(int clienteID, std::string productoNombre, int cantidad)
    : clienteID(clienteID), productoNombre(productoNombre), cantidad(cantidad) {}

int Venta::getClienteID() const {
    return clienteID;
}

std::string Venta::getProductoNombre() const {
    return productoNombre;
}

int Venta::getCantidad() const {
    return cantidad;
}
