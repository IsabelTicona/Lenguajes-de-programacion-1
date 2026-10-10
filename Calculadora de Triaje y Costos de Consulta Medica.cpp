//Calculadora de Triaje y Costos de Consulta Medica 

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int codigoServicio;
    int edad;
    int emergenciaNocturna;

    double tarifaBase = 0.0;
    double descuento = 0.0;
    double recargo = 0.0;
    double montoDescuento = 0.0;
    double montoRecargo = 0.0;
    double totalNeto = 0.0;

    string servicio;

    cout << "CALCULADORA DE TRIAJE Y COSTOS DE CONSULTA MEDICA" << endl;
    
    cout << "Ingrese el codigo del servicio:" << endl;
    cout << "1: Medicina General ($30.00)" << endl;
    cout << "2: Pediatria ($45.00)" << endl;
    cout << "3: Cardiologia ($70.00)" << endl;
    cout << "4: Traumatologia ($60.00)" << endl;
    cout << "OPCION: ";
    cin >> codigoServicio;

    // Seleccion del servicio
    switch(codigoServicio)
    {
        case 1:
            servicio = "Medicina General";
            tarifaBase = 30.00;
            break;

        case 2:
            servicio = "Pediatria";
            tarifaBase = 45.00;
            break;

        case 3:
            servicio = "Cardiologia";
            tarifaBase = 70.00;
            break;

        case 4:
            servicio = "Traumatologia";
            tarifaBase = 60.00;
            break;

        default:
            cout << "ERROR: Codigo de servicio no valido" << endl;
            return 1;
    }

    // Ingreso de edad
    cout << "Ingrese la edad del paciente: ";
    cin >> edad;

    // Validacion de edad
    if(edad < 0)
    {
        cout << "ERROR: La edad no puede ser negativa" << endl;
        return 1;
    }

    // Restriccion de Pediatria
    if(codigoServicio == 2 && edad >= 18)
    {
        cout << "AVISO: El paciente tiene 18 anos o mas." << endl;
        cout << "Debe ser atendido en Medicina General." << endl;

        servicio = "Medicina General";
        tarifaBase = 30.00;
    }

    // Ingreso del horario nocturno
    cout << "La atencion es en horario de emergencia nocturna?" << endl;
    cout << "1: Si" << endl;
    cout << "0: No" << endl;
    cout << "OPCION: ";
    cin >> emergenciaNocturna;

    // Validacion del horario
    if(emergenciaNocturna != 0 && emergenciaNocturna != 1)
    {
        cout << "ERROR: Opcion de horario no valida" << endl;
        return 1;
    }

    // Descuento para adulto mayor
    if(edad >= 65)
    {
        descuento = 0.25;
    }

    // Recargo nocturno
    if(emergenciaNocturna == 1)
    {
        recargo = 0.20;
    }

    // Calculo de montos
    montoDescuento = tarifaBase * descuento;
    montoRecargo = tarifaBase * recargo;

    totalNeto = tarifaBase - montoDescuento + montoRecargo;

    // Resultados
    cout << fixed << setprecision(2);

    cout << "\n========== RESULTADO ==========" << endl;
    cout << "Servicio asignado: " << servicio << endl;
    cout << "Costo base: $" << tarifaBase << endl;
    cout << "Descuento aplicado: " << (descuento * 100) << "%" << endl;
    cout << "Monto de descuento: $" << montoDescuento << endl;
    cout << "Recargo nocturno: " << (recargo * 100) << "%" << endl;
    cout << "Monto de recargo: $" << montoRecargo << endl;
    cout << "Total neto a pagar: $" << totalNeto << endl;

    return 0;
}