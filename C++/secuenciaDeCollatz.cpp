#include <iostream>
using namespace std;

int ingresarUnNumero(int numero, int solucion)
{
    if (numero % 2 == 0)
    {
        cout << "Ingresa un número: ";
        cin >> numero;
        return solucion = numero / 2;
    }

    else
    {
        cout << "Ingresa un número: ";
        cin >> numero;
        return solucion = ((3 * numero) + 1);
    }
    cout << solucion;
}
/*
int numeroPar(int ingresarUnNumero)
{
    cout << "Ingresa un número: ";
    cin >> ingresarUnNumero;
    return ingresarUnNumero / 2;
}

int numeroImpar(int ingresarUnNumero2)
{
    cout << "Ingresa un número: ";
    cin >> ingresarUnNumero2;
    return ((3 * ingresarUnNumero2) + 1);
}
*/
int main()
{
    int ingresaUnNumeroAqui, resultado;
    cout << ingresarUnNumero(ingresaUnNumeroAqui, resultado);
}