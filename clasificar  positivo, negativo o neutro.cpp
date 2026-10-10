#include <iostream>
using namespace std;

// Programa para clasificar un numero como positivo, negativo o neutro (cero)

int main() {
    float numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero > 0) {
        cout << "El numero es positivo." << endl;
    } else if (numero < 0) {
        cout << "El numero es negativo." << endl;
    } else {
        cout << "El numero es neutro (cero)." << endl;
    }

    return 0;
}