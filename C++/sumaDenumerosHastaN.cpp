#include <iostream>
using namespace std;

int main()
{
    int ingreseNumero;
    int suma = 0;

    cout << "Ingrese un número: ";
    cin >> ingreseNumero;

    for (int i = 1; i <= ingreseNumero; i++)
        suma += i;
    {
        cout << "La suma de los números es: " << suma;
        /*ingreseNumero = ingreseNumero + 1;*/
    }
}