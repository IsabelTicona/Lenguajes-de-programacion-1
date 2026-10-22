/* Calcular suma y promedio de n numeros*/

#include <iostream>
using namespace std;

int main()
{
    int n, numero, suma = 0, i = 1, promedio;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;
    
    do {
        cout << "Ingrese el numero: " << i << endl ;
        cin >> numero;

        suma = suma + numero;

        i++;
    } while (i <= n);

    promedio = suma / n;

    cout << "La suma total es: " << suma << endl;
    cout << "El promedio es: " << promedio << endl;
    return 0;
}