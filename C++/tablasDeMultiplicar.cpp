#include <iostream>
using namespace std;

int main()
{
    int ingresaNumeroHastaQueTabla;

    cout << "Ingresa hasta que tabla deseas multiplicar: ";
    cin >> ingresaNumeroHastaQueTabla;

    for (int x = 1; x <= ingresaNumeroHastaQueTabla; x++)
    {
        for (int i = 1; i <= 12; i++)
        {
            cout << x << " x " << i << " = " << x * i << endl;
        }
        cout << "------------------------" << endl;
    }
}