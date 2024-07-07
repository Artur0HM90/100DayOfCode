#include <iostream>
using namespace std;

int main()
{
    int ingresaTabla;
    int ingresaLimite;
    int inicio = 0;

    cout << "Ingresa que tabla de multiplicar: ";
    cin >> ingresaTabla;

    cout << "Ingresa hasta donde quieres que multiplique 1 - ?: ";
    cin >> ingresaLimite;

    cout << "------------------" << endl;
    cout << "La tabla del " << ingresaTabla << " es " << endl;
    cout << "------------------" << endl;
    for (int i = 1; i <= ingresaLimite; i++)
    {
        cout << ingresaTabla << " x " << i << " = " << ingresaTabla * i << endl;
    }
    return 0;
}