#ifndef TIENDA_H
#define TIENDA_H

#include "Producto.h"
#include "Cliente.h"
#include "Venta.h"
#include <vector>

class Tienda {
private:
    std::vector<Producto> productos;
    std::vector<Cliente> clientes;
    std::vector<Venta> ventas;

public:
    void agregarProducto(Producto producto);
    void registrarCliente(Cliente cliente);
    void realizarVenta(int clienteID, std::string productoNombre, int cantidad);
    void listarProductos() const;
    void consultarComprasCliente(int clienteID) const;
};

#endif
