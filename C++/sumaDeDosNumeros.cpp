#include <iostream>
using namespace std;

int main()
{
    float primerNumero;
    float segundoNumero;
    float resultadoSuma = 0;

    cout << "Ingresa el primer número: ";
    cin >> primerNumero;

    cout << "Ingrese el segundo número: ";
    cin >> segundoNumero;

    resultadoSuma = primerNumero + segundoNumero;

    cout << "La suma de " << primerNumero << " + " << segundoNumero << " = " << resultadoSuma;
}