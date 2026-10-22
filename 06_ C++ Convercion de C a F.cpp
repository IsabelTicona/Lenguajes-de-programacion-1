/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
using namespace std;

int main() {
    float C, F;

    cout << "Ingrese los grados Celsius: ";
    cin >> C;

    F = (C * 1.8) + 32;

    cout << "Grados Fahrenheit: " << F;

    return 0;
}
