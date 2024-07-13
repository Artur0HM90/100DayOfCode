#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int ingresaNumeroSecreto;
    int ingresaNumero;

    cout << "Ingresa el número secrero: ";
    cin >> ingresaNumero;

    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        ingresaNumeroSecreto = rand() % 100 + 1;
        /*cout << ingresaNumero;*/
    }

    while (ingresaNumero != ingresaNumeroSecreto)
    {
        cout << "INCORRECTO - Intentalo otra vez: ";
        cin >> ingresaNumero;
    }

    cout << "¡CORRECTO - El número secreto era " << ingresaNumero;
    return 0;
}