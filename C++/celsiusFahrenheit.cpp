#include <iostream>
using namespace std;

int main()
{
    int gradosCelsius, gradosFahrenheit, eleccion;

    cout << "1: Grados Celsius \n";
    cout << "2: Grados Fahrenheit \n";
    cout << "Elegi entre 1 - 2: ";
    cin >> eleccion;

    if (eleccion == 1)
    {
        cout << "Ingresa Grados Celsius: ";
        cin >> gradosCelsius;
        cout << ((gradosCelsius * 9 / 5) + 32);
    }

    else if (eleccion == 2)
    {
        cout << "Ingresa Grados Fahrenheit: ";
        cin >> gradosFahrenheit;
        cout << ((gradosFahrenheit - 32) * 5 / 9);
    }

    else
    {
        cout << "ERROR - Debes elegie entre las dos opciones 1 - 2.";
    }
}