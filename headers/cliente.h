#ifndef CLIENTE_H
#define CLIENTE_H

#include <QString>

class Cliente {
private:
    QString dni, nombre, telefono, direccion;

public:
    Cliente(QString d, QString n, QString t, QString dir);
    QString getInfo() const;
};

#endif // CLIENTE_H
