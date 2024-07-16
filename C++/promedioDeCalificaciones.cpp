#include <iostream>
using namespace std;

int main()
{
    int ingreseCantidadDeCalificaciones;
    float nota, promedio;

    cout << "Ingrese cuantas calificaciones ingresara: ";
    cin >> ingreseCantidadDeCalificaciones;

    for (int i = 1; i <= ingreseCantidadDeCalificaciones; i++)
    {
        cout << "Calificación " << i << ": ";
        cin >> nota;
        promedio += nota / ingreseCantidadDeCalificaciones;
    }
    cout << "Tu promedio final es: " << promedio;
}