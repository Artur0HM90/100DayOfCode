/*
1. Calcular el área y el perímetro de un terreno rectangular.
2. Hallar el volumen del cilindro.
3. Calcular el equivalente de metros en pulgadas.
4. Hallar el área y el volumen de un paralelepípedo.
*/

#include <iostream>
using namespace std;

int uno(int longitud, int ancho)
{
    cout << "Ingrese longitud: ";
    cin >> longitud;

    cout << "Ingrese ancho: ";
    cin >> ancho;

    are = longitud * ancho;
    perimetro = (2(longitud) + 2(ancho));
}

int main()
{
    int opcion;

    cout << "1. Calcular el área y el perímetro de un terreno rectangular." << endl;
    cout << "2. Hallar el volumen del cilindro." << endl;
    cout << "3. Calcular el equivalente de metros en pulgadas." << endl;
    cout << "4. Hallar el área y el volumen de un paralelepípedo." << endl;
    cout << "Elige entre 1 - 4: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "Elegiste calcular area y perimetro";

        break;

    case 2:
        /* code */
        break;

    case 3:
        /* code */
        break;

    case 4:
        /* code */
        break;

    default:
        break;
    }
}