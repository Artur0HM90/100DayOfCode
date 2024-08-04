/*
Elaborar un algoritmo que encuentre el número menor entre 4 números.
*/

#include <iostream>
using namespace std;

int main()
{
    int ingresePrimerNumero, ingreseSegundoNumero, ingreseTercerNumero, ingreseCuartoNumero;

    cout << "Ingrese primer número: ";
    cin >> ingresePrimerNumero;

    cout << "Ingrese segundo número: ";
    cin >> ingreseSegundoNumero;

    cout << "Ingrese tercer número: ";
    cin >> ingreseTercerNumero;

    cout << "Ingrese cuarto número: ";
    cin >> ingreseCuartoNumero;

    if ((ingresePrimerNumero < ingreseSegundoNumero) && (ingresePrimerNumero < ingreseTercerNumero) && (ingresePrimerNumero < ingreseCuartoNumero))
    {
        cout << "El primer número es el menor de los cuatro: " << ingresePrimerNumero;
    }
    else if ((ingreseSegundoNumero < ingresePrimerNumero) && (ingreseSegundoNumero < ingreseTercerNumero) && (ingreseSegundoNumero < ingreseCuartoNumero))
    {
        cout << "El segundo número es el menor de los cuatro: " << ingreseSegundoNumero;
    }
    else if ((ingreseTercerNumero < ingresePrimerNumero) && (ingreseTercerNumero < ingreseSegundoNumero) && (ingreseTercerNumero < ingreseCuartoNumero))
    {
        cout << "El tercer número es el menor de los cuatro: " << ingreseTercerNumero;
    }
    else
    {
        cout << "El cuarto número es el menor de los cuatro: " << ingreseCuartoNumero;
    }
}