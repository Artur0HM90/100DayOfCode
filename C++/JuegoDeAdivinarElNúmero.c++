#include <iostream>
using namespace std;

int main()
{
    int ingreseNumeroParaAdivinar, ingresaNumero;

    cout << "Ingresa un númro para que el usuaio adivine del 1 - 20: ";
    cin >> ingreseNumeroParaAdivinar;

    while (ingreseNumeroParaAdivinar != ingresaNumero)
    {
        cout << "Que número es el que esta oculto: ";
        cin >> ingresaNumero;

        if (ingreseNumeroParaAdivinar == ingresaNumero)
        {
            cout << "Ingresaste el número correcto." << endl;
            break;
        }
        cout << "ERROR - intentalo otra vez." << endl;
    }

    return 0;
}