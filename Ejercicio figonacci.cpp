//*Ejercicio: figonacci*//

#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 1, c;
    int n, i = 0;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;

    cout << "Serie de numeros es:" << endl;

    do {
        cout << a << " ";

        c = a + b;
        a = b;
        b = c;

        i++;
    } while (i < n);

    cout << endl;

    return 0;
}