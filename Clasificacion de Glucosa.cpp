#include <iostream>
using namespace std;

// Programa para clasificar el nivel de glucosa en la sangre
// segun su valor en ayunas (mg/dL)

int main() {
    float glucosa;

    cout << "Ingrese el nivel de glucosa en ayunas (mg/dL): ";
    cin >> glucosa;

    if (glucosa < 0) {
        cout << "Valor no valido." << endl;
    } else if (glucosa < 100) {
        cout << "Clasificacion: Normal." << endl;
    } else if (glucosa < 126) {
        cout << "Clasificacion: Prediabetes." << endl;
    } else {
        cout << "Clasificacion: Posible diabetes." << endl;
        cout << "Se requiere evaluacion medica para confirmar." << endl;
    }

    return 0;
}