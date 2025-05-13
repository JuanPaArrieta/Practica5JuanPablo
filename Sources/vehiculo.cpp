#include "headers/vehiculo.h"

Vehiculo::Vehiculo(QString c, QString m, QString mo, int a, double km, double p)
    : codigo(c), marca(m), modelo(mo), anio(a), kilometraje(km), precio(p) {}

QString Vehiculo::getInfo() const {
    return QString("Codigo: %1 | Marca: %2 | Modelo: %3 | Año: %4 | Km: %5 | Precio: %6")
        .arg(codigo).arg(marca).arg(modelo).arg(anio).arg(kilometraje).arg(precio);
}
