#include <iostream>
using namespace std;

// Programa para clasificar un numero como nulo, par o impar

int main() {
    int numero;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (numero == 0) {
        cout << "El numero es nulo." << endl;
    } else if (numero % 2 == 0) {
        cout << "El numero es par." << endl;
    } else {
        cout << "El numero es impar." << endl;
    }

    return 0;
}