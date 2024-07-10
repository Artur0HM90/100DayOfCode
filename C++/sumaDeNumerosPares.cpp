#include <iostream>
using namespace std;

int main()
{
    int ingresaNumerosPares;
    int suma = 0;

    cout << "Ingresa hasta donde quieres que sume: ";
    cin >> ingresaNumerosPares;

    cout << "SUMA DE NÚMEROS PARES HASTA EL " << ingresaNumerosPares << endl;

    for (int i = 1; i <= ingresaNumerosPares; i++)
    {
        if (i % 2 == 0)
        {
            suma = suma += i;
            cout << suma << endl;
        }
    }
}