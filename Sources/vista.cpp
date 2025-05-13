#include "headers/vista.h"

void VistaConsola::mostrarMenu() {
    QTextStream out(stdout);
    out << "\n--- MENU PRINCIPAL ---\n";
    out << "1. Registrar vehiculo\n";
    out << "2. Registrar cliente\n";
    out << "3. Consultar\n";
    out << "4. Salir\n";
}

QString VistaConsola::leerTexto(QString mensaje) {
    QTextStream in(stdin), out(stdout);
    out << mensaje;
    out.flush();
    return in.readLine();
}

int VistaConsola::leerOpcion(QString mensaje) {
    return leerTexto(mensaje).toInt();
}

double VistaConsola::leerDecimal(QString mensaje) {
    return leerTexto(mensaje).toDouble();
}
