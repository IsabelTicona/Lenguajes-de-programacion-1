#include <iostream>
using namespace std;

// Programa: Evaluacion de Notas
// Funcion: Solicita una nota de 0 a 20 y muestra su estado

int main() {
    int nota;
    char categoria;

    cout << "Ingrese una nota entre 0 y 20: ";
    cin >> nota;

    if (nota < 0 || nota > 20) {
        cout << "Nota no valida. Ingrese un valor entre 0 y 20." << endl;
        return 0;
    }

    // Primer bloque: clasificar el estado de la nota
    if (nota >= 18) {
        cout << "Estado: Excelente" << endl;
    } else if (nota >= 14) {
        cout << "Estado: Bueno" << endl;
    } else if (nota >= 11) {
        cout << "Estado: Regular" << endl;
    } else {
        cout << "Estado: Desaprobado" << endl;
    }

    // Segundo bloque: asignar una categoria
    if (nota >= 18) {
        categoria = 'A';
    } else if (nota >= 14) {
        categoria = 'B';
    } else if (nota >= 11) {
        categoria = 'C';
    } else {
        categoria = 'D';
    }

    // Switch: mostrar la categoria correspondiente
    switch (categoria) {
        case 'A':
            cout << "Categoria: A" << endl;
            break;
        case 'B':
            cout << "Categoria: B" << endl;
            break;
        case 'C':
            cout << "Categoria: C" << endl;
            break;
        case 'D':
            cout << "Categoria: D" << endl;
            break;
    }

    return 0;
}