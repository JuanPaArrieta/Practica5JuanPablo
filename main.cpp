#include <QCoreApplication>
#include "headers/controlador.h"
#include "headers/vista.h"

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);
    Controlador ctrl;

    int opcion;
    do {
        VistaConsola::mostrarMenu();
        opcion = VistaConsola::leerOpcion("Seleccione una opcion: ");

        switch (opcion) {
        case 1: ctrl.registrarVehiculo(); break;
        case 2: ctrl.registrarCliente(); break;
        case 3: ctrl.consultarRegistros(); break;
        case 4: qInfo("Saliendo del sistema..."); break;
        default: qInfo("Opcion no válida.");
        }

    } while (opcion != 4);

    return 0;
}
