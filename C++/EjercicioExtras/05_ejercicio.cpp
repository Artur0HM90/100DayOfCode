/* Elaborar un programa que verifique si un número es impar y múltiplo de 5.*/

#include <iostream>
using namespace std;

int main()
{
    int ingreseNumero;

    cout << "Ingresa un número: ";
    cin >> ingreseNumero;

    if ((ingreseNumero % 2 != 0) && (ingreseNumero % 5 == 0))
    {
        cout << "El número " << ingreseNumero << " es IMPAR y multiplo de CINCCO";
    }

    else
    {
        cout << "Número " << ingreseNumero << " no es impar ni múltiplo de 5";
    }
}