/*SUMA DE MATRIZ*/

#include <iostream>

using namespace std;

int main()
{
    int filas, columnas;
    float suma;

    cout << "Ingrese la cantidad de filas: ";
    cin >> filas;
    cout << "Ingrese la cantidad de columnas: ";
    cin >> columnas;
    
    int matriz[filas][columnas];

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Ingrese el valor para [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];                  
            suma+= matriz[i][j];
        }
    }
    
    cout << endl;
    
    cout << "ARREGLO BIDIMENSIONAL"<<endl;
                      
    cout << endl;
    
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << "\t ";
        }
        cout << endl;
    }
    
    cout << "La suma de todos los elementos es: " << suma << endl;
}
