// Programa: Clasificador de Glucosa en Sangre (version por tipo de medicion)

#include <iostream>
#include <string>
using namespace std;

int main() {
    double glucosa;
    int opcion;
    string tipoTexto, resultado;

    cout << "=== Clasificador de Glucosa en Sangre ===\n\n";
    cout << "Tipo de medicion:\n";
    cout << "1. En ayunas\n";
    cout << "2. Aleatoria\n";
    cout << "3. Postprandial (2h despues de comer)\n";
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    cout << "Ingrese el valor de glucosa (mg/dL): ";
    cin >> glucosa;

    // --- SWITCH: selecciona el tipo de medicion ---
    switch (opcion) {
        case 1:
            tipoTexto = "Ayunas";

            // --- IF: clasifica segun rangos de ayunas ---
            if (glucosa < 70)
                resultado = "Hipoglucemia";
            else if (glucosa <= 99)
                resultado = "Normal";
            else if (glucosa >= 100 && glucosa <= 125)
                resultado = "Prediabetes (glucosa en ayunas alterada)";
            else
                resultado = "Diabetes";

            break;

        case 2:
            tipoTexto = "Aleatoria";

            if (glucosa < 70)
                resultado = "Hipoglucemia";
            else if (glucosa <= 139)
                resultado = "Normal";
            else if (glucosa >= 140 && glucosa <= 199)
                resultado = "Riesgo elevado / posible prediabetes";
            else
                resultado = "Diabetes (requiere confirmacion)";
            break;

        case 3:
            tipoTexto = "Postprandial";

            if (glucosa < 70)
                resultado = "Hipoglucemia";
            else if (glucosa <= 139)
                resultado = "Normal";
            else if (glucosa >= 140 && glucosa <= 199)
                resultado = "Prediabetes (intolerancia a la glucosa)";
            else
                resultado = "Diabetes";
            break;

        default:
            cout << "Opcion invalida.\n";
            return 1;
    }

    cout << "\n--- Resultado ---\n";
    cout << "Tipo de medicion: " << tipoTexto << "\n";
    cout << "Glucosa: " << glucosa << " mg/dL\n";
    cout << "Clasificacion: " << resultado << "\n";

    cout << "\nNota: Rangos de referencia generales, no sustituyen diagnostico medico.\n";

    return 0;
}
