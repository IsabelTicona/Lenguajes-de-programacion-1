// Programa: Compatibilidad Sanguinea
// Funcion : Solicita el tipo de sangre del donante y receptor (8 tipos) y determina si la donacion es compatible usando switch anidados con salida directa en cada caso.
#include <iostream>
using namespace std;

int main() {
    int donante, receptor;

    cout << "=== COMPATIBILIDAD SANGUINEA ===" << endl;

    cout << "\nTipos de sangre:" << endl;
    cout << "1. O-" << endl;
    cout << "2. O+" << endl;
    cout << "3. A-" << endl;
    cout << "4. A+" << endl;
    cout << "5. B-" << endl;
    cout << "6. B+" << endl;
    cout << "7. AB-" << endl;
    cout << "8. AB+" << endl;

    cout << "\nSeleccione el tipo de sangre del DONANTE: ";
    cin >> donante;

    cout << "Seleccione el tipo de sangre del RECEPTOR: ";
    cin >> receptor;

    switch (donante) {

        case 1: // O-
            switch (receptor) {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                    cout << "\nCompatible: O- puede donar a todos." << endl;
                    break;
                default:
                    cout << "\nTipo de receptor no valido." << endl;
            }
            break;

        case 2: // O+
            switch (receptor) {
                case 2:
                case 4:
                case 6:
                case 8:
                    cout << "\nCompatible." << endl;
                    break;
                default:
                    cout << "\nNo compatible." << endl;
            }
            break;

        case 3: // A-
            switch (receptor) {
                case 3:
                case 4:
                case 7:
                case 8:
                    cout << "\nCompatible." << endl;
                    break;
                default:
                    cout << "\nNo compatible." << endl;
            }
            break;

        case 4: // A+
            switch (receptor) {
                case 4:
                case 8:
                    cout << "\nCompatible." << endl;
                    break;
                default:
                    cout << "\nNo compatible." << endl;
            }
            break;

        case 5: // B-
            switch (receptor) {
                case 5:
                case 6:
                case 7:
                case 8:
                    cout << "\nCompatible." << endl;
                    break;
                default:
                    cout << "\nNo compatible." << endl;
            }
            break;

        case 6: // B+
            switch (receptor) {
                case 6:
                case 8:
                    cout << "\nCompatible." << endl;
                    break;
                default:
                    cout << "\nNo compatible." << endl;
            }
            break;

        case 7: // AB-
            switch (receptor) {
                case 7:
                case 8:
                    cout << "\nCompatible." << endl;
                    break;
                default:
                    cout << "\nNo compatible." << endl;
            }
            break;

        case 8: // AB+
            switch (receptor) {
                case 8:
                    cout << "\nCompatible." << endl;
                    break;
                default:
                    cout << "\nNo compatible." << endl;
            }
            break;

        default:
            cout << "\nTipo de sangre del donante no valido." << endl;
    }

    return 0;
}