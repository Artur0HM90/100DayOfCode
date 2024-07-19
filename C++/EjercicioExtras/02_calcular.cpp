/*
1. Calcular el valor de a, si a=(b+3)/2.
2. Calcular el promedio de los valores numéricos de a, b y c.
3. Calcular el valor de la velocidad v dados la distancia d y el tiempo t.
4. Calcular el área del rectángulo dados los valores de la base b y la altura h.
*/

#include <iostream>
using namespace std;

int main()
{

    int opcion, resultado, cuantasNotasIngresaras;
    float ingresa_B, promedio, nota, ingresaDistancia, ingresaTiempo, ingresaBase, ingresaAltura;

    cout << "1. Calcular si a=(b+3)/2." << endl;
    cout << "2. Calcular el promedio." << endl;
    cout << "3. Calcular velocidad - distancia y tiempo." << endl;
    cout << "4. CAlcular área del rectángulo" << endl;
    cout << "Elige del 1 - 4: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "-------------------------------" << endl;
        cout << "Elegiste calcular si a=(b+3)/2." << endl;
        cout << "-------------------------------" << endl;
        cout << "Ingresa B: ";
        cin >> ingresa_B;
        resultado = ((ingresa_B + 3) / 2);
        cout << "El resultado es: " << resultado;
        break;
    case 2:
        cout << "---------------------------" << endl;
        cout << "Elegiste calcular promedio." << endl;
        cout << "---------------------------" << endl;

        cout << "Cuantas notas vas ingresar: ";
        cin >> cuantasNotasIngresaras;
        for (int i = 1; i <= cuantasNotasIngresaras; i++)
        {
            cout << "Nota " << i << ": ";
            cin >> nota;
            promedio += nota / cuantasNotasIngresaras;
        }
        cout << "Tu promedio final es: " << promedio << endl;

        if (promedio < 6)
        {
            cout << "Tu nota es C.";
        }
        else if (promedio < 14)
        {
            cout << "Tu notax es B.";
        }
        else
        {
            cout << "Tu nota es A";
        }
        break;

    case 3:
        cout << "-----------------------------------" << endl;
        cout << "Elegiste distancia d y el tiempo t." << endl;
        cout << "-----------------------------------" << endl;
        cout << "Ingresa la distancia: ";
        cin >> ingresaDistancia;
        cout << "Ingresa tiempo: ";
        cin >> ingresaTiempo;
        resultado = ingresaDistancia * ingresaTiempo;
        cout << "Velocidad: " << resultado << " km/h";

        break;

    case 4:
        cout << "----------------------------" << endl;
        cout << "Elegiste área del rectángulo" << endl;
        cout << "----------------------------" << endl;
        cout << "Ingresa la base del rectangulo: ";
        cin >> ingresaBase;
        cout << "Ingresa la altura del rectangulo: ";
        cin >> ingresaAltura;
        resultado = ingresaBase * ingresaAltura;
        cout << "El area del rectangulo es: " << resultado;

        break;
    default:
        cout << "ERROR - Debes elegir entre 1 - 4";
        break;
    }
}