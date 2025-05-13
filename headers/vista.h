#ifndef VISTA_H
#define VISTA_H

#include <QString>
#include <QTextStream>

class VistaConsola {
public:
    static void mostrarMenu();
    static QString leerTexto(QString mensaje);
    static int leerOpcion(QString mensaje);
    static double leerDecimal(QString mensaje);
};

#endif // VISTA_H
