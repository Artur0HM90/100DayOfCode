#include <iostream>
using namespace std;

int main()
{

    int ingresaNumero;
    int facotiral;

    cout << "Cual es el factorial de: ";
    cin >> ingresaNumero;
    cout << "El factorial de " << ingresaNumero << " es ";

    for (int i = 1; i <= ingresaNumero; i++)
        facotiral *= i;
    {
        cout << facotiral;
    }

    return 0;
}