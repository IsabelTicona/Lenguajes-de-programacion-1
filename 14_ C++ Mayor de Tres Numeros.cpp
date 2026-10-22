// Programa: Mayor de Tres Numeros 

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Ingrese el valor de A" << endl;
    cin >> a;
    cout << "Ingrese el valor de B" << endl;
    cin >> b;
    cout << "Ingrese el valor de C" << endl;
    cin >> c;

    if (a >= b) {
        if (a >= c) {
            cout << "El numero mayor es: " << a << endl;
        } else {
            cout << "El numero mayor es: " << c << endl;
        }
    }
    else if (b >= c) {
        cout << "El numero mayor es: " << b << endl;
    }
    else {
        cout << "El numero mayor es: " << c << endl;
    }

    return 0;
}
