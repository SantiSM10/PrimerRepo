#include "Cliente.h"

Cliente::Cliente(std::string nombre, int idCliente)
    : nombre(nombre), idCliente(idCliente) {}

std::string Cliente::getNombre() const {
    return nombre;
}

int Cliente::getIdCliente() const {
    return idCliente;
}
