#include <iostream>
using namespace std;
int main()
{
    string ingresaNombre;
    float montoDeprestamo;
    float IngresoMensual;
    int opcion;

    /*
    string historialExcelente;
    string historialBueno;
    string historialRegular;
    */

    cout << "Ingresa tus nombres: ";
    cin >> ingresaNombre;

    cout << "Ingresa tu ingreso mensual: ";
    cin >> IngresoMensual;

    cout << "Ingresa que monto del prestamo: ";
    cin >> montoDeprestamo;

    if ((IngresoMensual >= 3000) && (montoDeprestamo <= 50000))
    {
        cout << "Historial crediticio" << endl;
        cout << "1. Bueno." << endl;
        cout << "2. Excelente." << endl;
        cout << "ingresa 1 - 2: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Hola " << ingresaNombre << " dolares." << endl;
            cout << "Monto de prestamo solicitado " << montoDeprestamo << " dolares." << endl;
            cout << "Tu ingreso mensual es: " << IngresoMensual << " dolares." << endl;
            cout << "Tu historial Crediticio es Buena." << endl;
            cout << "Tu prestamo fue APROBADA";

            break;

        case 2:
            cout << "Hola " << ingresaNombre << " dolares." << endl;
            cout << "Monto de prestamo solicitado " << montoDeprestamo << " dolares." << endl;
            cout << "Tu ingreso mensual es: " << IngresoMensual << " dolares." << endl;
            cout << "Tu historial Crediticio es Excelente." << endl;
            cout << "Tu prestamo fue APROBADA";
            break;

        default:
            break;
        }
    }
    else if ((IngresoMensual <= 2000 or IngresoMensual <= 2999) && (montoDeprestamo >= 50001 or montoDeprestamo >= 100000))
    {
        cout << "Hola " << ingresaNombre << " dolares." << endl;
        cout << "Monto de prestamo solicitado " << montoDeprestamo << " dolares." << endl;
        cout << "Tu ingreso mensual es: " << IngresoMensual << " dolares." << endl;
        cout << "Tu historial Crediticio es esta en revisión." << endl;
        cout << "Tu prestamo fue REGULAR";
    }
    else
    {
        cout << "Una solicitud de préstamo es rechazada.";
    }
}