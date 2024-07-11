#include <iostream>
using namespace std;

int main()
{
    int sumaDeImpares;
    int suma = 0;

    cout << "Ingresa hasta donde quieres que sume: ";
    cin >> sumaDeImpares;

    cout << "SUMA DE NÚMEROS IMPARES";

    for (int i = 1; i <= sumaDeImpares; i++)
    {
        if (i % 2 != 0)
        {
            suma += i;
            cout << suma << endl;
        }
    }
}