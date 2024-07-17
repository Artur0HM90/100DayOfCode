#include <iostream>
using namespace std;

int suma(float num1, float num2)
{
    return num1 + num2;
}

int resta(float num1, float num2)
{
    return num1 - num2;
}

int multiplicacion(float num1, float num2)
{
    return num1 * num2;
}

int division(float num1, float num2)
{
    return num1 / num2;
}

int ingresar(float &num1, float &num2)
{
    cout << "Ingresar primer número: ";
    cin >> num1;

    cout << "Ingresar segundo número: ";
    cin >> num2;

    return 0;
}

int main()
{
    int opcion;
    float ingresePrimerNumero, ingreseSegundoNumero;
    float resultado;

    cout << "1. SUMA" << endl;
    cout << "2. RESTA" << endl;
    cout << "3. MULTIPLICACION" << endl;
    cout << "4. DIVISION" << endl;
    cout << "Elige entre 1 - 4: ";
    cin >> opcion;
    /*
    cout << "Ingrese primer número: ";
    cin >> ingresePrimerNumero;

    cout << "Ingrese segundo número: ";
    cin >> ingreseSegundoNumero;
    */

    switch (opcion)
    {
    case 1:
        cout << "ELEGISTE LA SUMA." << endl;
        ingresar(ingresePrimerNumero, ingreseSegundoNumero);
        cout << "Resultado: " << ingresePrimerNumero << " + " << ingreseSegundoNumero << " = " << suma(ingresePrimerNumero, ingreseSegundoNumero);
        return 0;
        break;

    case 2:
        cout << "ELEGISTE LA RESTA." << endl;
        ingresar(ingresePrimerNumero, ingreseSegundoNumero);
        cout << "Resultado: " << ingresePrimerNumero << " - " << ingreseSegundoNumero << " = " << resta(ingresePrimerNumero, ingreseSegundoNumero);
        break;

    case 3:
        cout << "ELEGISTE LA MULTIPLICACIÓN." << endl;
        ingresar(ingresePrimerNumero, ingreseSegundoNumero);
        cout << "Resultado: " << ingresePrimerNumero << " x " << ingreseSegundoNumero << " = " << multiplicacion(ingresePrimerNumero, ingreseSegundoNumero);
        break;

    case 4:
        cout << "ELEGISTE LA DIVISIÓN." << endl;
        ingresar(ingresePrimerNumero, ingreseSegundoNumero);
        if (ingreseSegundoNumero == 0)
        {
            cout << "No se puede dividir entre CERO";
        }
        else
        {
            cout << "Resultado: " << ingresePrimerNumero << " / " << ingreseSegundoNumero << " = " << division(ingresePrimerNumero, ingreseSegundoNumero);
            break;
        }

    default:
        cout << "ERROR - Debes elegir entre las 4 opciones 1 - 4.";
        break;
    }
    return 0;
}