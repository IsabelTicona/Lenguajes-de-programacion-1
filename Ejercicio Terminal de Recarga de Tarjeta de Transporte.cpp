//*Ejercicio: Terminal de Recarga de Tarjeta de Transporte*//
#include <iostream>
using namespace std;

int main() {
    int monto;
    int saldo = 0;
    char respuesta;

    do {
        cout << "Ingrese el monto a recargar (S/ 1, 2, 5, 10 o 20): ";
        cin >> monto;

        if (monto == 1 || monto == 2 || monto == 5 ||
            monto == 10 || monto == 20) {
            saldo = saldo + monto;
            cout << "Recarga exitosa." << endl;
            cout << "Saldo actual: S/ " << saldo << endl;
        } else {
            cout << "Monto no valido. Ingrese 1, 2, 5, 10 o 20." << endl;
        }

        cout << "Desea ingresar mas dinero? (S/N): ";
        cin >> respuesta;

    } while (respuesta == 'S' || respuesta == 's');

    cout << "Recarga finalizada." << endl;
    cout << "Saldo total de la tarjeta: S/ " << saldo << endl;

    return 0;
}