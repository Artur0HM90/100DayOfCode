/*
Escribe un programa que convierta una temperatura dada en Celsius a Fahrenheit y viceversa.
*/

#include <iostream>
using namespace std;
int main()
{
    float ingresaTemperatura;
    double celsiusFahre, FahrenheitCelsi;
    int opcion;

    cout << "1. Celsius a Fahrenheit." << endl;
    cout << "2. Fahrenheit a Celsius." << endl;
    cout << "Elige 1 o 2: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "Ingresa temperatura en Celsius: ";
        cin >> ingresaTemperatura;

        celsiusFahre = ((ingresaTemperatura * 9 / 5) + 32);
        cout << "Los " << ingresaTemperatura << " Celsius a " << celsiusFahre << " Fahrenheit";
        break;

    case 2:
        cout << "Ingresa temperatura en Fahrenheit: ";
        cin >> ingresaTemperatura;

        FahrenheitCelsi = ((ingresaTemperatura - 32) * 5 / 9);
        cout << "Los " << ingresaTemperatura << " Fahrenheit a " << FahrenheitCelsi << " Celsius";
    default:
        break;
    }
}