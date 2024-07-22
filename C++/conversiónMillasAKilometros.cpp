/*Conversión de unidades: Convierte kilómetros a millas y viceversa.*/

#include <iostream>
using namespace std;

int main()
{

    int opcion;
    float millas, kilometros, resultado;
    float valorKilometros = 1.60934;
    float valorMillas = 0.621371;

    cout << "1. Millas a Kilometros." << endl;
    cout << "2. Kilometros a Millas." << endl;
    cout << "Elige entre 1 - 2: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "MILLAS A KILOMETROS." << endl;
        cout << "Ingresa Millas: ";
        cin >> millas;
        resultado = millas * valorKilometros;
        cout << "Distancia a kilometros: " << resultado;
        break;

    case 2:
        cout << "KILOMETROS A MILLAS." << endl;
        cout << "Ingresa kilometros: ";
        cin >> kilometros;
        resultado = kilometros * valorMillas;
        cout << "Distancia a Millas: " << resultado;
        break;

    default:
        cout << "ERROR - Debes elegir entre 1 - 2";
        break;
    }
}