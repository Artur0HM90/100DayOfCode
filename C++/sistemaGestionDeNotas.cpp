#include <iostream>
using namespace std;
#include <string>

int main()
{
    int ingresaNota;
    string ingresaPrimerNombre, ingresaSegundoNombre;
    const char *primeraCalificacion = "A";
    const char *segundoCalificacion = "B";
    const char *terceraCalificacion = "B";
    const char *cuartaCalificacion = "D";
    const char *quintaCalificacion = "F";

    cout << "Ingresa primer nombre: ";
    cin >> ingresaPrimerNombre;

    cout << "Ingresa segundo nombre: ";
    cin >> ingresaSegundoNombre;

    cout << "Ingresa tu calificación: ";
    cin >> ingresaNota;

    if (ingresaNota >= 90)
    {
        cout << "Nombre " << ingresaPrimerNombre << " " << ingresaSegundoNombre << endl;
        cout << "Nota: " << ingresaNota << endl;
        cout << "Aprobaste el curso" << endl;
        cout << "Tu calificación es: " << primeraCalificacion;
    }
    else if ((ingresaNota >= 80) && (ingresaNota < 90))
    {
        cout << "Nombre " << ingresaPrimerNombre << " " << ingresaSegundoNombre << endl;
        cout << "Nota: " << ingresaNota << endl;
        cout << "Aprobaste el curso" << endl;
        cout << "Tu calificación es: " << segundoCalificacion;
    }
    else if ((ingresaNota >= 70) && (ingresaNota < 80))
    {
        cout << "Nombre " << ingresaPrimerNombre << " " << ingresaSegundoNombre << endl;
        cout << "Nota: " << ingresaNota << endl;
        cout << "Desaprobaste el curso" << endl;
        cout << "Tu calificación es: " << terceraCalificacion;
    }
    else if ((ingresaNota >= 60) && (ingresaNota < 70))
    {
        cout << "Nombre " << ingresaPrimerNombre << " " << ingresaSegundoNombre << endl;
        cout << "Nota: " << ingresaNota << endl;
        cout << "Desaprobaste el curso" << endl;
        cout << "Tu calificación es: " << cuartaCalificacion;
    }

    else
    {
        cout << "Nombre " << ingresaPrimerNombre << " " << ingresaSegundoNombre << endl;
        cout << "Nota: " << ingresaNota << endl;
        cout << "Desaprobaste el curso" << endl;
        cout << "Tu calificación es: " << quintaCalificacion;
    }
}