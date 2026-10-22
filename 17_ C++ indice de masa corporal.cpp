/*Hallar el numero de masa corporal imc*/

#include <iostream>

using namespace std;

int main()
{
    int peso, estatura, imc;
    
    cout << "Ingrese el peso en kg" << endl;
    cin >> peso;
    
    cout << "Ingrese la estatura en m" << endl;
    cin >> estatura;
    
    imc = peso / (estatura * estatura);
    
    if (imc >= 18.5) {
        cout << "Bajo de peso: " << imc << endl;
    }
    else if (imc >= 18.5 && imc <= 24.9){
        cout << "Peso normal: " << imc << endl;
    }
    else if (imc >= 25.0 && imc <= 29.9){
        cout << "Sobrepeso: " << imc << endl;
    }
    else if (imc >= 30.0 && imc <= 34.9){
        cout << "Obesidad Grado I: " << imc << endl;
    }
    else if (imc >= 35.0 && imc <= 39.9){
        cout << "Obesidad Grado II: " << imc << endl;
    }
    else{
        cout << "Obesidad Grado III: " << imc << endl;
    }
        
    return 0;
}
