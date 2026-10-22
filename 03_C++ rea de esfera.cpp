// Hallar el Area de una esfera
#include <iostream>
using namespace std;

int main() {
    float radio, area;
    const float PI = 3.1416;

    cout << "Ingrese el radio de la esfera: ";
    cin >> radio;

    area = 4 * PI * radio * radio;

    cout << "El area de la esfera es: " << area << endl;

    return 0;
}
