/* Ingresar un numero y dar su factorial */

#include <iostream>

using namespace std;

int main()
{
    int n, i, factorial;
    char respuesta;

    do {
        cout << "Ingrese un numero: ";
        cin >> n;
        
        if (n < 0)
        {
            cout << "No valido: ingrese otro numero." << endl;
        }
        else
         {
            factorial = 1;

            for (i = 1; i <= n; i++)
            {
                factorial = factorial * i;
            }

            cout << "El factorial de " << n
                 << " es: " << factorial << endl;
        }

        cout << "Desea ingresar otro numero? (s/n): ";
        cin >> respuesta;

    } while (respuesta == 'S' || respuesta == 's');

    return 0;
}
