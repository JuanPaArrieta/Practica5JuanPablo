#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include "headers/vehiculo.h"
#include "headers/cliente.h"
#include <QVector>

class Controlador {
private:
    QVector<Vehiculo> vehiculos;
    QVector<Cliente> clientes;

public:
    void registrarVehiculo();
    void registrarCliente();
    void consultarRegistros();
};

#endif // CONTROLADOR_H
