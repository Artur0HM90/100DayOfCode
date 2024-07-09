#include <iostream>
using namespace std;

int main()
{
    float ingresaAltura, ingresaBase;
    float resultado = 0;

    cout << "Ingresa la Base: ";
    cin >> ingresaBase;

    cout << "Ingresa altura: ";
    cin >> ingresaAltura;

    resultado = ingresaBase * ingresaAltura;

    cout << "El area del rectangulo es " << resultado;
}