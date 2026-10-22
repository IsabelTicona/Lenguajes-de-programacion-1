// Hallar el area de un elipse
#include <iostream>
using namespace std;

int main() {
    float a, b, area;
    const float PI = 3.1416;

    cout << "Ingrese el semieje mayor: ";
    cin >> a;

    cout << "Ingrese el semieje menor: ";
    cin >> b;

    area = PI * a * b;

    cout << "El area de la elipse es: " << area << endl;

    return 0;
}
