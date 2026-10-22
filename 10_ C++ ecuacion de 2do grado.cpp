#include <iostream>
#include <cmath>
using namespace std;

// Programa para resolver una ecuacion de segundo grado

int main() {
    float a, b, c, discriminante, x1, x2;

    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Ingrese el valor de c: ";
    cin >> c;

    discriminante = b * b - 4 * a * c;

    if (discriminante >= 0 && a != 0) {
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);

        cout << "La primera solucion es: " << x1 << endl;
        cout << "La segunda solucion es: " << x2 << endl;
    } else {
        cout << "No existen soluciones reales o a es igual a cero." << endl;
    }

    return 0;
}
