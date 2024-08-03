/*
Cada manzana cuesta 50 céntimos, pero si compran más de 20 manzanas se le hace un descuento del 10%; y si la venta supera las 100 manzanas se le hace un descuento del 20%. Elaborar un algoritmo que indique el monto a pagar.
*/

#include <iostream>
using namespace std;
int main()
{
    const float precioManzana = 0.50;
    const float primerDescuento = 0.10;
    const float segundoDescuento = 0.20;

    int cantidadManzanas;
    float precioParaPagar, precioConDescuento, precioConDescuentoDos;

    cout << "Cuantas manzanas comprastes: ";
    cin >> cantidadManzanas;

    if (cantidadManzanas > 1 && cantidadManzanas < 20)
    {
        precioParaPagar = cantidadManzanas * precioManzana;
        cout << "Compastes " << cantidadManzanas << " manzanas " << precioParaPagar << " centimos";
    }

    else if (cantidadManzanas >= 20 && cantidadManzanas < 100)
    {
        precioParaPagar = cantidadManzanas * precioManzana;
        precioConDescuento = precioParaPagar * primerDescuento;

        cout << "Precio por las manzanas " << precioParaPagar << " dolares." << endl;
        cout << "Tu descuento es " << precioConDescuento << " dolares." << endl;
        cout << "Compastes " << cantidadManzanas << " manzanas total a pajar es: " << precioParaPagar - precioConDescuento << " dolares";
    }
    else if (cantidadManzanas >= 100)
    {
        precioParaPagar = cantidadManzanas * precioManzana;
        precioConDescuentoDos = precioParaPagar * segundoDescuento;

        cout << "Precio por las manzanas " << precioParaPagar << " dolares." << endl;
        cout << "Tu descuento es " << precioConDescuentoDos << " dolares." << endl;
        cout << "Compastes " << cantidadManzanas << " manzanas total a pajar es: " << precioParaPagar - precioConDescuentoDos << " dolares";
    }
    else
    {
        precioParaPagar = cantidadManzanas * precioManzana;
        cout << "Comprastes " << cantidadManzanas << " manzana.";
    }
}