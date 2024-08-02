/*Elaborar un programa que verifique que, si un número es par se lo multiplique por 3 y se lo eleve al cuadrado.*/

#include <iostream>
using namespace std;

int main()
{
    int ingresarNumero, primerSolucion, segundaSolucion;
    int numero = 3;

    cout << "Ingresa un número: ";
    cin >> ingresarNumero;

    if (ingresarNumero % 2 == 0)
    {
        primerSolucion = ingresarNumero * numero;
        segundaSolucion = pow(primerSolucion, 2);
        cout << "La solución es: " << segundaSolucion;
    }
    else
    {
        cout << "El número " << ingresarNumero << " no es PAR.";
    }

    return 0;
}
