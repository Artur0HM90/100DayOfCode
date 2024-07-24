/*
1. Determinar el área de un trapecio.
2. Leer dos números y mostrar su suma, resta, producto y módulo.
3. Calcular el IGV de una venta.
4. Calcular el promedio de INISCO en la UPN.
    PRIMER EXAMEN  - 10%
    SEGUNDO EXAMEN - 20%
    TERCER EXAMEN  - 30%
    EXAMEN FINAL   - 40%
*/

#include <iostream>
using namespace std;

#define RED "\033[31m"   /*COLOR ROJO*/
#define GREEN "\033[32m" /*COLOR VERDE*/
#define BLUE "\033[34m"  /*COLOR AZUL*/
#define RESET "\033[0m"
int main()
{

    int opcion, medida, cantidadDeProducto;
    float baseUno, baseDos, altura, formula, resultado, precioDelProducto, precioTotal, IGVproducto, IGV, porcentaje;
    int ingresaPrimerNumero, ingresaSegundoNumero;
    float primerExamen, segundoExamen, tercerExamen, examenFinal, promedioFinal;
    float primeraNota, segundaNota, terceraNota, cuartaNota;
    float primeraPorcentaje = 0.10;
    float segundaPorcentaje = 0.20;
    float terceraPorcentaje = 0.30;
    float cuartaPorcentaje = 0.40;

    cout << BLUE << "1. Determinar área de un trapecio." << endl;
    cout << BLUE << "2. Leer dos números y elige (Suma - Resta - Producto - Modulo)." << endl;
    cout << BLUE << "3. Calcular IGV." << endl;
    cout << BLUE << "4. Calcular promedio INISCO." << endl;
    cout << "Elige entre 1 - 4: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << RESET << "Elegiste determinar área de un trapecio." << endl;
        cout << "1. Metros." << endl;
        cout << "2. Centimetros." << endl;
        cout << "3. Milimetros." << endl;
        cout << "Que medida es el trapecio 1 - 3: ";
        cin >> medida;
        switch (medida)
        {
        case 1:
            cout << "Ingresa la primera base: ";
            cin >> baseUno;
            cout << "Ingresa la segunda base: ";
            cin >> baseDos;
            cout << "Ingresa la altura: ";
            cin >> altura;
            formula = ((baseUno + baseDos) * altura) / 2;
            cout << GREEN << GREEN << "El área de un trapecio es: " << formula << " metros.";
            break;

        case 2:
            cout << "Ingresa la primera base: ";
            cin >> baseUno;
            cout << "Ingresa la segunda base: ";
            cin >> baseDos;
            cout << "Ingresa la altura: ";
            cin >> altura;
            formula = ((baseUno + baseDos) * altura) / 2;
            cout << GREEN << "El área de un trapecio es: " << formula << " centimetros.";
            break;

        case 3:
            cout << "Ingresa la primera base: ";
            cin >> baseUno;
            cout << "Ingresa la segunda base: ";
            cin >> baseDos;
            cout << "Ingresa la altura: ";
            cin >> altura;
            formula = ((baseUno + baseDos) * altura) / 2;
            cout << GREEN << "El área de un trapecio es: " << formula << " milimetros.";
            break;

        default:
            cout << RED << "ERROR - Debes elegir 1 - 3.";
            break;
        }
        break;

    case 2:
        cout << "------------------------------------" << endl;
        cout << "Elegiste ingresar números y elige" << endl;
        cout << "(Suma - Resta - Producto - Modulo)" << endl;
        cout << "------------------------------------" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Producto" << endl;
        cout << "4. Modulo" << endl;
        cout << "Elige entre 1 - 4: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Elegite SUMA." << endl;
            cout << "Ingresa primer número: ";
            cin >> ingresaPrimerNumero;
            cout << "Ingresa segundo número: ";
            cin >> ingresaSegundoNumero;
            resultado = ingresaPrimerNumero + ingresaSegundoNumero;
            cout << GREEN << "El resultado es: " << resultado;
            break;

        case 2:
            cout << "Elegite RESTA." << endl;
            cout << "Ingresa primer número: ";
            cin >> ingresaPrimerNumero;
            cout << "Ingresa segundo número: ";
            cin >> ingresaSegundoNumero;
            resultado = ingresaPrimerNumero - ingresaSegundoNumero;
            cout << GREEN << "El resultado es: " << resultado;
            break;

        case 3:
            cout << "Elegite PRODUCTO." << endl;
            cout << "Ingresa primer número: ";
            cin >> ingresaPrimerNumero;
            cout << "Ingresa segundo número: ";
            cin >> ingresaSegundoNumero;
            resultado = ingresaPrimerNumero * ingresaSegundoNumero;
            cout << GREEN << "El resultado es: " << resultado;
            break;

        case 4:
            cout << "Elegite MODULO." << endl;
            cout << "Ingresa primer número: ";
            cin >> ingresaPrimerNumero;
            cout << "Ingresa segundo número: ";
            cin >> ingresaSegundoNumero;
            resultado = ingresaPrimerNumero % ingresaSegundoNumero;
            cout << GREEN << "El resultado es: " << resultado;
            break;

        default:
            cout << RED << "ERROR - Debes elegir 1 - 4.";
            break;
        }
        break;

    case 3:
        cout << "Elegiste calcular IGV." << endl;
        cout << "Cuantos productos comprastes: ";
        cin >> cantidadDeProducto;
        cout << "Ingresa el precio del producto: ";
        cin >> precioDelProducto;
        precioTotal = cantidadDeProducto * precioDelProducto;
        cout << "Ingresa el porcentaje del IGV: ";
        cin >> IGV;
        IGVproducto = (precioTotal * IGV) / 100;
        cout << "Precio del produto: " << precioTotal << endl;
        cout << "IGV: " << IGVproducto;
        cout << GREEN << "Precio total: " << precioTotal + IGVproducto;
        break;

    case 4:
        cout << "Elegiste calcular promedio de INISCO en la UPN." << endl;
        cout << "Ingresa nota del primer examen: ";
        cin >> primerExamen;
        primeraNota = (primerExamen * primeraPorcentaje);
        cout << "Ingresa nota del segundo examen: ";
        cin >> segundoExamen;
        segundaNota = (segundoExamen * segundaPorcentaje);
        cout << "Ingresa nota del tercer examen: ";
        cin >> tercerExamen;
        terceraNota = (tercerExamen * terceraPorcentaje);
        cout << "Ingresa nota del examen final: ";
        cin >> examenFinal;
        cuartaNota = (examenFinal * cuartaPorcentaje);
        promedioFinal = primeraNota + segundaNota + terceraNota + cuartaNota;
        cout << GREEN << "Tu promedio final es: " << promedioFinal;
        break;

    default:
        cout << RED << "ERROR - Debes elegir 1 - 4.";
        break;
    }
    return 0;
}
