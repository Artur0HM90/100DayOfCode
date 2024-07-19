#include <iostream>
using namespace std;

/*Funcion para sacar potencias*/
int potemciaNumero(float num1, int potencia)
{
    float resultado = 0;
    return (pow(num1, potencia));
}

int main()
{
    float ingresaNumero, solucion;
    int ingresaPotencia;

    cout << "Ingresa un número: ";
    cin >> ingresaNumero;

    cout << "Ingresa potencia: ";
    cin >> ingresaPotencia;

    /* Aqui estamos llamando a la funcion que creamos en la parte superior*/
    cout << "La potencia es " << potemciaNumero(ingresaNumero, ingresaPotencia);
}