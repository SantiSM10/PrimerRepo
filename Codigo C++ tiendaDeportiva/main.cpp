#include "Tienda.h"

int main() {
    Tienda tienda;

    // Agregar productos
    tienda.agregarProducto(Producto("Balon", 50, 10));
    tienda.agregarProducto(Producto("Raqueta", 120, 5));
    tienda.agregarProducto(Producto("Bicicleta", 300, 2));

    // Registrar clientes
    tienda.registrarCliente(Cliente("Alberto", 1));
    tienda.registrarCliente(Cliente("Maria", 2));

    // Listar productos
    tienda.listarProductos();

    // Realizar ventas
    tienda.realizarVenta(1, "Balon", 10);
    tienda.realizarVenta(2, "Raqueta", 1);

    // Consultar compras
    tienda.consultarComprasCliente(1);
    tienda.consultarComprasCliente(2);

    return 0;
}


// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.