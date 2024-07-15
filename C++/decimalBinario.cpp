#include <iostream>
using namespace std;

int main()
{
    int ingreseNumero;
    int resultado = 0;

    cout << "Ingrese número: ";
    cin >> ingreseNumero;
    /*resultado = ingreseNumero % 2;*/

    while (resultado > 0)
    {
        resultado = ingreseNumero % 2;
        cout << resultado;
    }
}
