/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;

    cout << "Ingrese el cateto opuesto: ";
    cin >> a;
    
    cout << "Ingrese el cateto adyacente: ";
    cin >> b;

    c = sqrt(pow(a,2) + pow(b,2));

    cout << "la hipotenusa es: " << c << endl;

    return 0;
}
