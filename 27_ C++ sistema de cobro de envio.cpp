// Programa: Sistema de Cobro de Envio

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int zona, entrega, cliente;
    float peso;
    double descuentop = 0.0, recargop = 0.0, multa = 0.0, montoi;

    cout << "SISTEMA DE COBRO DE ENVIO" << endl;
    cout << "Ingrese la zona de destino " << endl;
    cout << "\n 1: Local/Urbana($5.00)" << endl;
    cout << "\n 2: Nacional($10.00)" << endl;
    cout << "\n 3: America del Sur($20.00)" << endl;
    cout << "\n 4: Internacional/Resto del mundo($35.00)" << endl;
    cin >> zona;

    cout << "Ingrese el peso total del paquete en kilogramos" << endl;
    cin >> peso;

    if (peso <= 0 || peso > 50) {
        cout << "ERROR: El peso del paquete no debe de ser menor a cero (kg) o mayor a 50 (kg) ";
        return 1;
    }
    else {
        cout << "Tipo de entrega Express/Prioritaria (1,si o 0,no)" << endl;
        cin >> entrega;
        cout << "Tipo de cliente: (1,Corporativo/frecuente o 0,Particular) " << endl;
        cin >> cliente;

        if (entrega == 1)
            recargop = 0.25;

        if (peso > 15)
            multa = 12;

        if (cliente == 1)
            descuentop = 0.10;

        switch (zona) {
            case 1:
                montoi = 5;
                break;
            case 2:
                montoi = 10;
                break;
            case 3:
                montoi = 20;
                break;
            case 4:
                montoi = 35;
                break;
            default:
                cout << "ERROR: Zona del destino no valido" << endl;
                return 1;
        }

        double recargof = montoi * recargop;
        double multaf = multa + recargof;
        double montosf = montoi + recargof;
        double descuentof = montosf * descuentop;
        double montof = montosf - descuentof;

        cout << fixed << setprecision(2);
        cout << "\n#######################################\n" << endl;
        cout << "\n Boleta de Tarifa de envio" << endl;
        cout << "Codigo de zona elegida: " << zona << endl;
        cout << "Costo base por peso: " << montoi << endl;
        cout << "Multas por exceso de peso: " << multa << endl;
        cout << "Recargo express: " << recargof << endl;
        cout << "Descuento corporativo: " << descuentof << endl;
        cout << "Monto Final: " << montof << endl;
    }

    return 0;
}
