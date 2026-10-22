/* Promedio de notas */

#include <iostream>
using namespace std;

int main()
{
    int n, suma = 0, promedio;

    cout << "Ingrese el numero de notas: ";
    cin >> n;

    int notas[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese la nota [" << i << "]: ";
        cin >> notas[i];

        suma = suma + notas[i];
    }
    
    cout << "\nLista de todas las notas" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Nota en indice [" << i << "]: " << notas[i] << endl;
    }

    promedio = (float)suma / n;

    cout << "\nLa suma de las notas es: " << suma << endl;
    cout << "El promedio es: " << promedio << endl;

    return 0;
}
