/*Calculadora hecho con Funciones*/
#include <iostream>
using namespace std;

int calculadora(int opcion, float num1, float num2, float solucion)
{

    cout << "1. Suma." << endl;
    cout << "2. Resta." << endl;
    cout << "3. Multiplicación." << endl;
    cout << "4. División." << endl;
    cout << "Elige entre el 1 - 4: ";
    cin >> opcion;

    cout << "Ingresa el primer número: ";
    cin >> num1;

    cout << "Ingresa el segundo número: ";
    cin >> num2;

    switch (opcion)
    {
    case 1:
        return num1 + num2;
        break;

    case 2:
        return num1 - num2;
        break;

    case 3:
        return num1 * num2;
        break;

    case 4:
        if (num2 == 0)
        {
            cout << "NO SE PUEDE DIVIDIR ENTRE CERO." << endl;
            break;
        }
        else
        {
            return num1 / num2;
        }

    default:
        cout << "Debes elegir entre el 1 - 4.";
        break;
    }
    return solucion;

    cout << ("Saliste de la calculadora.");
    return 0;
}

int main()

{
    int elegir;
    float ingresaPrimerNumero, ingresaSegundoNumero, desarrollo;
    cout << calculadora(elegir, ingresaPrimerNumero, ingresaSegundoNumero, desarrollo);
}