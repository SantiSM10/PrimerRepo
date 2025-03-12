#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <string>

class Cliente {
private:
    std::string nombre;
    int idCliente;

public:
    Cliente(std::string nombre, int idCliente);

    std::string getNombre() const;
    int getIdCliente() const;
};

#endif
