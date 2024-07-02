#include <iostream>
using namespace std;

int main()
{
    int ingreseNuumero = 0;

    cout << "Ingrese un número: ";
    cin >> ingreseNuumero;

    if (ingreseNuumero % 2 == 0)
    {
        cout << "El número ingresado es PAR.";
    }
    else
    {
        cout << "El número ingresado es IMPAR.";
    }

    return 0;
}