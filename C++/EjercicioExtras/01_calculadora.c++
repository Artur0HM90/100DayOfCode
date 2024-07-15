#include <iostream>
using namespace std;

int main()
{
    float ingresePrimerNumero, ingreseSegundoNumero;
    float resultado = 0;
    int seleccion;

    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicación" << endl;
    cout << "4. División" << endl;
    cout << "Elige entre las 4 opciones: 1 a 4: ";
    cin >> seleccion;

    cout << "Ingrese en primer número: ";
    cin >> ingresePrimerNumero;

    cout << "Ingrese el segundo número: ";
    cin >> ingreseSegundoNumero;

    switch (seleccion)
    {
    case 1:
        cout << "Elegiste la SUMA." << endl;
        resultado = ingresePrimerNumero + ingreseSegundoNumero;
        break;

    case 2:
        cout << "Elegiste la RESTA." << endl;
        resultado = ingresePrimerNumero - ingreseSegundoNumero;
        break;

    case 3:
        cout << "Elegiste la MULTIPLICACIÓN." << endl;
        resultado = ingresePrimerNumero * ingreseSegundoNumero;
        break;

    case 4:
        cout << "Elegiste la DIVISIÓN." << endl;
        if (ingreseSegundoNumero == 0)
        {
            cout << "NO SE PUEDE DIVIDIR CON CERO.";
        }
        else
        {
            resultado = ingresePrimerNumero / ingreseSegundoNumero;
        }
        break;

    default:
        cout << "ERROR - Debes elegir entre 1 - 4" << endl;
        break;
    }

    cout << "El resultado es: " << resultado;

    return 0;
}