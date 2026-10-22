/* Tabla de multiplicar con do while */

#include <iostream>
using namespace std;

int main()
{
    int n, i;
    char respuesta;

    do {
        cout << "Ingrese el valor de n: " << endl;
        cin >> n;

        for (i = 1; i <= 10; i++)
        {
            cout << n << " x " << i << " = " << n * i << endl;
        }

        cout << "Desea imprimir la siguiente tabla? (s/n): ";
        cin >> respuesta;

    } while (respuesta == 'S' || respuesta == 's');

    return 0;
}