// Programa para calcular el area y el perimetro de un rectangulo

#include <iostream>
using namespace std;

int main() {
    float base, altura, area, perimetro;

    cout << "Ingrese la base del rectangulo: ";
    cin >> base;

    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;

    area = base * altura;
    perimetro = 2 * (base + altura);

    cout << "El area del rectangulo es: " << area << endl;
    cout << "El perimetro del rectangulo es: " << perimetro << endl;

    return 0;
}