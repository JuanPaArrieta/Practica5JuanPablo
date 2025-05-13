#include "headers/cliente.h"

Cliente::Cliente(QString d, QString n, QString t, QString dir)
    : dni(d), nombre(n), telefono(t), direccion(dir) {}

QString Cliente::getInfo() const {
    return QString("DNI: %1 | Nombre: %2 | Teléfono: %3 | Dirección: %4")
        .arg(dni).arg(nombre).arg(telefono).arg(direccion);
}
