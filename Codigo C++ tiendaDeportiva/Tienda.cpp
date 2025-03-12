#include "Tienda.h"

void Tienda::agregarProducto(Producto producto) {
    productos.push_back(producto);
}

void Tienda::registrarCliente(Cliente cliente) {
    clientes.push_back(cliente);
}

void Tienda::realizarVenta(int clienteID, std::string productoNombre, int cantidad) {
    for (auto& producto : productos) {
        if (producto.getNombre() == productoNombre) {
            if (producto.getStock() >= cantidad) {
                producto.modificarStock(-cantidad);
                ventas.push_back(Venta(clienteID, productoNombre, cantidad));
                return;
            } else {
                std::cout << "Stock insuficiente para " << productoNombre << std::endl;
                return;
            }
        }
    }
    std::cout << "Producto no encontrado." << std::endl;
}

void Tienda::listarProductos() const {
    for (const auto& producto : productos) {
        std::cout << "Producto: " << producto.getNombre() << " - Stock: " << producto.getStock() << std::endl;
    }
}

void Tienda::consultarComprasCliente(int clienteID) const {
    for (const auto& venta : ventas) {
        if (venta.getClienteID() == clienteID) {
            std::cout << "Compro " << venta.getCantidad() << " de " << venta.getProductoNombre() << std::endl;
        }
    }
}
