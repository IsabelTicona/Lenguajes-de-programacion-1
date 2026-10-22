// Programa: Calculadora de Peaje y Exceso de Carga
// Funcion : Solicita el peso del vehiculo, pase de telepeaje y categoria (auto, autobus, camion), calcula el costo base, aplica 15% de descuento con pase electronico y multa por exceso de peso (camion >= 12 toneladas), mostrando el desglose final.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double pesoV;
    int categoria;
    double costoCategoria = 0.0;
    double descuentoTelepeaje = 0.0;
    double multaPeso = 0.0;
    int paseTelepeaje = 0;
    double totalPagar = 0.0;

    cout << "CALCULADORA DE PEAJE Y EXCESO DE CARGA" << endl;
    cout << "Ingrese el peso total del vehiculo en toneladas: ";
    cin >> pesoV;

    if (pesoV <= 0) {
        cout << "ERROR, el peso del vehiculo debe ser un valor positivo" << endl;
        return 1;
    }

    cout << "Cuenta con pase electronico de telepeaje (1 = Si, 0 = No): " << endl;
    cin >> paseTelepeaje;

    cout << "Seleccione la categoria del vehiculo" << endl;
    cout << "1: Auto / camioneta ($3.00)" << endl;
    cout << "2: Autobus ($6.00)" << endl;
    cout << "3: Camion de carga ($10.00)" << endl;
    cout << "OPCION: ";
    cin >> categoria;

    switch (categoria) {
        case 1:
            costoCategoria = 3.00;
            break;
        case 2:
            costoCategoria = 6.00;
            break;
        case 3:
            costoCategoria = 10.00;
            break;
        default:
            cout << "ERROR: Opcion de categoria no valida" << endl;
            return 1;
    }

    if (categoria == 3 && pesoV >= 12) {
        multaPeso = (pesoV - 12) * 2.5;
    }

    if (paseTelepeaje == 1) {
        descuentoTelepeaje = costoCategoria * 0.15;
    }

    totalPagar = (costoCategoria - descuentoTelepeaje) + multaPeso;

    cout << fixed << setprecision(2);
    cout << "--------------- Desglose ---------------" << endl;
    cout << "Costo base de la categoria: $" << costoCategoria << endl;
    cout << "Descuento aplicado por pase de Telepeaje: $" << descuentoTelepeaje << endl;
    cout << "Penalizacion por exceso de peso: $" << multaPeso << endl;
    cout << "Monto final a pagar: $" << totalPagar << endl;

    return 0;
}
