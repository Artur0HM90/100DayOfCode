#include <iostream>
using namespace std;
int main()
{
    int opcion, cantidadDeProductos;
    float ingresaPrecio, precioTotal, porcentajeDescuento;
    /* Descuento de camisetas */
    float primerDescuentoCamisetas = 0.05;
    float segundoDescuentoCamisetas = 0.15;

    /* Descuento de pantalones */
    float primerDescuentoPantalones = 0.07;
    float segundoDescuentoPantalones = 0.12;
    float tercerDescuentoPantalones = 0.20;

    /* Descuento de abrigos */
    float primerDescuentoAbrigos = 0.25;

    /* Descuento camisetas y abrigos */
    float DescuentoCamisetasAbrigo = 0.10;

    cout << "1. Camisetas" << endl;
    cout << "2. Pantalones" << endl;
    cout << "3. Abrigos" << endl;
    cout << "Que vas a comprar: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "---------------------------" << endl;
        cout << "Elegiste comprar Camisetas." << endl;
        cout << "---------------------------" << endl;
        cout << "Cuantas camisetas vas a comprar: ";
        cin >> cantidadDeProductos;
        cout << "Ingrese el precio: ";
        cin >> ingresaPrecio;
        precioTotal = cantidadDeProductos * ingresaPrecio;
        if (precioTotal <= 20)
        {
            cout << "Precio del producto es: $" << precioTotal << " dolares." << endl;
            porcentajeDescuento = precioTotal * primerDescuentoCamisetas;
            cout << "Tienes un descuento del 5%: $" << porcentajeDescuento << " dolares." << endl;
            cout << "--------------------------------." << endl;
            cout << "Total a pagar es de: $" << precioTotal - porcentajeDescuento << " dolares" << endl;
            cout << "--------------------------------." << endl;
        }
        else if ((precioTotal > 20) && (precioTotal <= 50))
        {
            cout << "Precio del producto es: $" << precioTotal << " dolares." << endl;
            porcentajeDescuento = precioTotal * DescuentoCamisetasAbrigo;
            cout << "Tienes un descuento del 10%: $" << porcentajeDescuento << " dolares." << endl;
            cout << "--------------------------------." << endl;
            cout << "Total a pagar es de: $" << precioTotal - porcentajeDescuento << " dolares" << endl;
            cout << "--------------------------------." << endl;
        }
        else if ((precioTotal > 50))
        {
            cout << "Precio del producto es: $" << precioTotal << " dolares." << endl;
            porcentajeDescuento = precioTotal * segundoDescuentoCamisetas;
            cout << "Tienes un descuento del 15%: $" << porcentajeDescuento << " dolares." << endl;
            cout << "--------------------------------." << endl;
            cout << "Total a pagar es de: $" << precioTotal - porcentajeDescuento << " dolares." << endl;
            cout << "--------------------------------." << endl;
        }
        break;

    case 2:
        cout << "---------------------------" << endl;
        cout << "Elegiste comprar Pantalones." << endl;
        cout << "---------------------------" << endl;
        cout << "Cuantas pantalones vas a comprar: ";
        cin >> cantidadDeProductos;
        cout << "Ingrese el precio: ";
        cin >> ingresaPrecio;
        precioTotal = cantidadDeProductos * ingresaPrecio;
        if (precioTotal <= 30)
        {
            cout << "Precio del producto es: $" << precioTotal << " dolares." << endl;
            porcentajeDescuento = precioTotal * primerDescuentoPantalones;
            cout << "Tienes un descuento del 7%: $" << porcentajeDescuento << " dolares." << endl;
            cout << "--------------------------------." << endl;
            cout << "Total a pagar es de: $" << precioTotal - porcentajeDescuento << " dolares" << endl;
            cout << "--------------------------------." << endl;
        }
        else if ((precioTotal > 30) && (precioTotal <= 60))
        {
            cout << "Precio del producto es: $" << precioTotal << " dolares." << endl;
            porcentajeDescuento = precioTotal * segundoDescuentoPantalones;
            cout << "Tienes un descuento del 12%: $" << porcentajeDescuento << " dolares." << endl;
            cout << "--------------------------------." << endl;
            cout << "Total a pagar es de: $" << precioTotal - porcentajeDescuento << " dolares" << endl;
            cout << "--------------------------------." << endl;
        }
        else if ((precioTotal > 60))
        {
            cout << "Precio del producto es: $" << precioTotal << " dolares." << endl;
            porcentajeDescuento = precioTotal * tercerDescuentoPantalones;
            cout << "Tienes un descuento del 20%: $" << porcentajeDescuento << " dolares." << endl;
            cout << "--------------------------------." << endl;
            cout << "Total a pagar es de: $" << precioTotal - porcentajeDescuento << " dolares." << endl;
            cout << "--------------------------------." << endl;
        }
        break;

    case 3:
        cout << "---------------------------" << endl;
        cout << "Elegiste comprar Abrigos." << endl;
        cout << "---------------------------" << endl;
        cout << "Cuantas abrigos vas a comprar: ";
        cin >> cantidadDeProductos;
        cout << "Ingrese el precio: ";
        cin >> ingresaPrecio;
        precioTotal = cantidadDeProductos * ingresaPrecio;
        if (precioTotal <= 100)
        {
            cout << "Precio del producto es: $" << precioTotal << " dolares." << endl;
            porcentajeDescuento = precioTotal * DescuentoCamisetasAbrigo;
            cout << "Tienes un descuento del 10%: $" << porcentajeDescuento << " dolares." << endl;
            cout << "--------------------------------." << endl;
            cout << "Total a pagar es de: $" << precioTotal - porcentajeDescuento << " dolares" << endl;
            cout << "--------------------------------." << endl;
        }
        else if ((precioTotal > 100))
        {
            cout << "Precio del producto es: $" << precioTotal << " dolares." << endl;
            porcentajeDescuento = precioTotal * primerDescuentoAbrigos;
            cout << "Tienes un descuento del 10%: $" << porcentajeDescuento << " dolares." << endl;
            cout << "--------------------------------." << endl;
            cout << "Total a pagar es de: $" << precioTotal - porcentajeDescuento << " dolares." << endl;
            cout << "--------------------------------." << endl;
        }
        break;

    default:
        cout << "Debes elegir entre 1 - 3.";
        break;
    }
}