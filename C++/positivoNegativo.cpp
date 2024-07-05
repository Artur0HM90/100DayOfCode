#include <iostream>
using namespace std;

int main()
{
    int ingresaNumero;

    cout << "Ingresa un número: ";
    cin >> ingresaNumero;

    if (ingresaNumero > 0)
    {
        cout << "El número ingresado es positio.";
    }
    else if (ingresaNumero < 0)
    {
        cout << "El número ingresado es negativo.";
    }
    else
    {
        cout << "El número ingresado es cero.";
    }
    return 0;
}