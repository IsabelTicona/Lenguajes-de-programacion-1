#include <iostream>
using namespace std;

// Programa para convertir segundos a horas, minutos y segundos

int main() {
    int totalSegundos, horas, minutos, segundos;

    cout << "Ingrese la cantidad de segundos: ";
    cin >> totalSegundos;

    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;

    cout << "Horas: " << horas << endl;
    cout << "Minutos: " << minutos << endl;
    cout << "Segundos: " << segundos << endl;

    return 0;
}
