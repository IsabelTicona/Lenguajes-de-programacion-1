/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    double radio, area;
    const double PI = 3.14159265359;

    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    area = PI * radio * radio;

    cout << "El area del circulo es: " << area << endl;

    return 0;
}