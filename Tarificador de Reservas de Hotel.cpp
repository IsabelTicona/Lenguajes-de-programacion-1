// Tarificador de Reservas de Hotel

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int tipoHabitacion;
    int noches;
    int huespedes;
    int planAlimentacion;

    double tarifaNoche = 0.0;
    double subtotalAlojamiento = 0.0;
    double recargoHuespedes = 0.0;
    double costoAlimentacion = 0.0;
    double descuento = 0.0;
    double totalAcumulado = 0.0;
    double totalPagar = 0.0;

    cout << "===== TARIFICADOR DE RESERVAS DE HOTEL =====" << endl;

    // Entrada de datos
    cout << "\nTipo de habitacion:" << endl;
    cout << "1. Habitacion Estandar - S/.50.00 por noche" << endl;
    cout << "2. Habitacion Doble    - S/.80.00 por noche" << endl;
    cout << "3. Suite Ejecutiva     - S/.140.00 por noche" << endl;
    cout << "Ingrese el tipo de habitacion: ";
    cin >> tipoHabitacion;

    // Seleccion de tarifa con switch
    switch (tipoHabitacion)
    {
        case 1:
            tarifaNoche = 50.00;
            break;

        case 2:
            tarifaNoche = 80.00;
            break;

        case 3:
            tarifaNoche = 140.00;
            break;

        default:
            cout << "\nERROR: Tipo de habitacion no valido." << endl;
            return 0;
    }

    cout << "Ingrese el numero de noches: ";
    cin >> noches;

    cout << "Ingrese la cantidad de huespedes: ";
    cin >> huespedes;

    // Validacion de noches y huespedes
    if (noches <= 0 || huespedes < 1)
    {
        cout << "\nERROR: La cantidad de noches debe ser mayor a 0";
        cout << " y los huespedes deben ser al menos 1." << endl;
        return 0;
    }

    cout << "\nPlan de alimentacion:" << endl;
    cout << "1. Solo Desayuno" << endl;
    cout << "2. Pension Completa (Almuerzo y Cena)" << endl;
    cout << "Ingrese el plan de alimentacion: ";
    cin >> planAlimentacion;

    // Validacion del plan
    if (planAlimentacion != 1 && planAlimentacion != 2)
    {
        cout << "\nERROR: Plan de alimentacion no valido." << endl;
        return 0;
    }

    // Subtotal de alojamiento
    subtotalAlojamiento = tarifaNoche * noches;

    // Recargo por huesped adicional
    int capacidad;

    if (tipoHabitacion == 1)
    {
        capacidad = 1;
    }
    else if (tipoHabitacion == 2)
    {
        capacidad = 2;
    }
    else
    {
        capacidad = 3;
    }

    if (huespedes > capacidad)
    {
        int huespedesExtra = huespedes - capacidad;
        recargoHuespedes = huespedesExtra * 15.00 * noches;
    }

    // Costo de alimentacion
    if (planAlimentacion == 1)
    {
        costoAlimentacion = 0.00;
    }
    else
    {
        costoAlimentacion = 25.00 * huespedes * noches;
    }

    // Costo acumulado antes del descuento
    totalAcumulado = subtotalAlojamiento
                   + recargoHuespedes
                   + costoAlimentacion;

    // Descuento por estadia larga
    if (noches > 5)
    {
        descuento = totalAcumulado * 0.12;
    }
    else
    {
        descuento = 0.00;
    }

    // Total final
    totalPagar = totalAcumulado - descuento;

    // Salida
    cout << fixed << setprecision(2);

    cout << "\n============================================" << endl;
    cout << "          DESGLOSE DE LA RESERVA            " << endl;
    cout << "============================================" << endl;

    cout << "Tipo de habitacion: ";

    if (tipoHabitacion == 1)
    {
        cout << "Habitacion Estandar" << endl;
    }
    else if (tipoHabitacion == 2)
    {
        cout << "Habitacion Doble" << endl;
    }
    else
    {
        cout << "Suite Ejecutiva" << endl;
    }

    cout << "Numero de noches: " << noches << endl;
    cout << "Cantidad de huespedes: " << huespedes << endl;

    cout << "Subtotal alojamiento: S/. " 
         << subtotalAlojamiento << endl;

    cout << "Recargo por huespedes adicionales: S/. "
         << recargoHuespedes << endl;

    if (planAlimentacion == 1)
    {
        cout << "Plan de alimentacion: Solo Desayuno" << endl;
    }
    else
    {
        cout << "Plan de alimentacion: Pension Completa" << endl;
    }

    cout << "Costo de alimentacion: S/. "
         << costoAlimentacion << endl;

    cout << "Descuento por estadia larga: S/. "
         << descuento << endl;

    cout << "--------------------------------------------" << endl;
    cout << "MONTO TOTAL A PAGAR: S/. "
         << totalPagar << endl;
    cout << "============================================" << endl;

    return 0;
}