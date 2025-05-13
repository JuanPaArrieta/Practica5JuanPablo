#include "headers/controlador.h"
#include "headers/vista.h"

void Controlador::registrarVehiculo() {
    QString codigo = VistaConsola::leerTexto("Codigo: ");
    QString marca = VistaConsola::leerTexto("Marca: ");
    QString modelo = VistaConsola::leerTexto("Modelo: ");
    int anio = VistaConsola::leerOpcion("Anio: ");
    double km = VistaConsola::leerDecimal("Kilometraje: ");
    double precio = VistaConsola::leerDecimal("Precio: ");

    vehiculos.append(Vehiculo(codigo, marca, modelo, anio, km, precio));
}

void Controlador::registrarCliente() {
    QString dni = VistaConsola::leerTexto("DNI: ");
    QString nombre = VistaConsola::leerTexto("Nombre: ");
    QString telefono = VistaConsola::leerTexto("Telefono: ");
    QString direccion = VistaConsola::leerTexto("Direccion: ");

    clientes.append(Cliente(dni, nombre, telefono, direccion));
}

void Controlador::consultarRegistros() {
    QTextStream out(stdout);
    out << "\n--- VEHICULOS REGISTRADOS ---\n";
    for (const Vehiculo &v : vehiculos) {
        out << v.getInfo() << "\n";
    }

    out << "\n--- CLIENTES REGISTRADOS ---\n";
    for (const Cliente &c : clientes) {
        out << c.getInfo() << "\n";
    }
}
