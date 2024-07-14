#include <iostream>
using namespace std;

int main()
{
    float primerNumero, segundoNumero, tercerNumero;

    cout << "Ingresa primer número: ";
    cin >> primerNumero;

    cout << "Ingresa segundo número: ";
    cin >> segundoNumero;

    cout << "Ingresa tercer número: ";
    cin >> tercerNumero;

    if ((primerNumero > segundoNumero) && (primerNumero > tercerNumero))
    {
        cout << "El primer número es el mayor " << primerNumero;
    }

    else if ((segundoNumero > primerNumero) && (segundoNumero > tercerNumero))
    {
        cout << "El segundo número es el mayor " << segundoNumero;
    }

    else
    {
        cout << "El tercer número es el mayor " << tercerNumero;
    }

    return 0;
}