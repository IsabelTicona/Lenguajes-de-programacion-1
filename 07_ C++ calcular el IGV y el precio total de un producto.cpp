#include <iostream>
using namespace std;

// Programa para calcular el IGV y el precio total de un producto

int main() {
    float precio, igv, total;
    const float tasaIGV = 0.18;

    cout << "Ingrese el precio del producto sin IGV: ";
    cin >> precio;

    igv = precio * tasaIGV;
    total = precio + igv;

    cout << "El IGV del producto es: S/ " << igv << endl;
    cout << "El precio total con IGV es: S/ " << total << endl;

    return 0;
}
