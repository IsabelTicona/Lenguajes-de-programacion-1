/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    string nombre, apellido; 
    int edad;

    cout << "Ingrese su nombre: ";
    cin >> nombre;

    cout << "Ingrese su apellido: ";
    cin >> apellido;
    
    cout << "Ingrese su adad: ";
    cin >> edad;

    cout << "Nombre completo: " << nombre << " " << apellido << " " << edad ;

    return 0;
}