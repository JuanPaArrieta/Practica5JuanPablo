#ifndef VEHICULO_H
#define VEHICULO_H

#include <QString>

class Vehiculo {
private:
    QString codigo, marca, modelo;
    int anio;
    double kilometraje, precio;

public:
    Vehiculo(QString c, QString m, QString mo, int a, double km, double p);
    QString getInfo() const;
};

#endif // VEHICULO_H
