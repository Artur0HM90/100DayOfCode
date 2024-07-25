/*Calcular edad a partir de la fecha de nacimiento: Calcula la edad de una persona dado su año de nacimiento.*/
#include <iostream>
using namespace std;

int main()
{
    int ingresaAñoDeNacimiento, ingresaMesDeNacimiento, ingresaDiaDeNacimiento;
    int ingresaAñoActual, ingresaMesActual, ingresaDiaActual;

    cout << "Ingresa año de nacimiento: ";
    cin >> ingresaAñoDeNacimiento;
    cout << "ingresa el mes de macimiento: ";
    cin >> ingresaMesDeNacimiento;
    cout << "Ingresa dia de nacimiento: ";
    cin >> ingresaDiaDeNacimiento;

    cout << "Ingresa año actual: ";
    cin >> ingresaAñoActual;
    cout << "Ingresa mes actual: ";
    cin >> ingresaMesActual;
    cout << "Ingresa dia actual: ";
    cin >> ingresaDiaActual;

    cout << ingresaAñoActual - ingresaAñoDeNacimiento << " años " << ingresaMesActual - ingresaMesDeNacimiento << " meses " << ingresaDiaActual - ingresaDiaDeNacimiento << " dias";
}