// Programa: Registro de Clientes con bucle for (version con validacion)

#include <iostream>
using namespace std;

int main() {
    double suma = 0, pago;
    int clientesPreferenciales = 0;

    cout << "REGISTRO DE CLIENTES" << endl;

    for (int i = 1; i <= 8; i++) {
        cout << "Ingrese el monto de pago " << i << ": " << endl;
        cin >> pago;

        suma = suma + pago;

        if (pago > 100) {
            clientesPreferenciales += 1;
        }
    }

    double prom = suma / 8;

    cout << "Total acumulado en caja: S/." << suma << endl;
    cout << "El promedio de consumo es: S/." << prom << endl;
    cout << "Cantidad total de clientes preferenciales: " << clientesPreferenciales << endl;

    return 0;
}