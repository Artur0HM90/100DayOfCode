#include <iostream>
using namespace std;

int collatz(int ingresaUnNumero)
{
    /*
    cout << "Ingresa un número: ";
    cin >> ingresaUnNumero;
    */

    if (ingresaUnNumero % 2 == 0)
    {
        return ingresaUnNumero / 2;
    }

    else
    {
        return ((3 * ingresaUnNumero) + 1);
    }
}
int main()
{
    int ingresaNumero, resultado;
    cout << "Ingresa un número: ";
    cin >> ingresaNumero;

    cout << "Secu8encia:  " << ingresaNumero;

    while (ingresaNumero != 1)
    {
        ingresaNumero = collatz(ingresaNumero);
        cout << "-> " << ingresaNumero;
    }
    cout << endl;
    return 0;
}