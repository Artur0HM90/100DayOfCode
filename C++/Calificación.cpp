#include <iostream>
using namespace std;

int main()
{
    int ingreseCuantasCantidadDeNotas;
    float nota, promeioFinal;

    cout << "Cuantas notas vas a ingresar: ";
    cin >> ingreseCuantasCantidadDeNotas;

    for (int i = 1; i <= ingreseCuantasCantidadDeNotas; i++)
    {
        cout << "Calificación " << i << ": ";
        cin >> nota;
        promeioFinal += nota / ingreseCuantasCantidadDeNotas;
    }
    cout << "Promedio final " << promeioFinal << endl;
    if (promeioFinal < 3)
    {
        cout << "Tu calificación es F.";
    }
    else if (promeioFinal < 8)
    {
        cout << "Tu calificación es: D";
    }
    else if (promeioFinal < 11)
    {
        cout << "Tu calificación es: C";
    }
    else if (promeioFinal < 15)
    {
        cout << "Tu calificación es: B";
    }
    else
    {
        cout << "Tu calificación es: A";
    }
}