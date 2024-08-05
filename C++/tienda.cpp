/*
Una tienda de ropa se encuentra en liquidación y está ofreciendo un descuento del 60%. Elaborar el algoritmo que
permita ingresar el precio del producto y que nos muestre cuanto se debe de pagar
*/

#include <iostream>
using namespace std;

int main()
{
    int ingresePrecio;
    float descuento = 0.60, descentoDelProducto;

    cout << "Ingresa el precio del producto: ";
    cin >> ingresePrecio;

    descentoDelProducto = ingresePrecio * descuento;

    cout << "Precio del producto es: " << ingresePrecio << " dolares." << endl;
    cout << "Descuento del producto es: " << descentoDelProducto << " dolares." << endl;
    cout << "Total a pagar es: " << ingresePrecio - descentoDelProducto << " dolares.";
}