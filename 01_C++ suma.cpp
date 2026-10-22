/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int num1, num2, suma, resta, multiplicacion, division;

    cout << "Ingrese primer numero: ";
    cin >> num1;

    cout << "Ingrese segundo numero: ";
    cin >> num2;
    
    suma = num1 + num2;
    cout << "La suma es: " << suma;

    resta = num1 - num2;
    cout << "La resta es: " << resta;
    
    multiplicacion = num1 * num2;
    cout << "La multiplicacion es: " << multiplicacion;
    
    division = num1 / num2;
    cout << "La division es: " << division;
    return 0;
}
