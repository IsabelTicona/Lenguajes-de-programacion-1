/*Tabla de multiplicar del 7*/

#include <iostream>
using namespace std;

int main()
{
 int i = 7;
    int j = 1;

    cout << "Tabla del: " << i << endl;

    do {
        
        cout << i << " x " << j << " = " << i * j << endl;
        j++;
        
    } while (j <= 10);

    return 0;
}