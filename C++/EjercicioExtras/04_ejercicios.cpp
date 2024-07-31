/*
1. Hallar el volumen del cilindro.
2. Calcular el equivalente de metros en pulgadas.
3. Hallar el área y el volumen de un paralelepípedo.
*/

#include <iostream>
using namespace std;

int cilindro(float ingresarRadio, int altura, float calcularRadio, float resultadoVolumen)
{
    const float PI = 3.14159;
    cout << "Ingrese radio: ";
    cin >> ingresarRadio;
    cout << "Ingrese altura: ";
    cin >> altura;

    calcularRadio = pow(ingresarRadio, 2);
    resultadoVolumen = (PI * (calcularRadio * altura));
    return resultadoVolumen;
}

int metrosPulgadas(float ingresarMetros, float solucionMetrosPulgadas)
{
    const float valorPulgadas = 39.3701;
    cout << "Ingresa una cifra a metros: ";
    cin >> ingresarMetros;

    solucionMetrosPulgadas = ingresarMetros * valorPulgadas;
    return solucionMetrosPulgadas;
}

int paralelepípedo(float ingresarLongitud, float ingresarBase, float ingresarAtura, float solucionVolumen, float solucionArea)
{
    cout << "Ingrese longitud: ";
    cin >> ingresarLongitud;

    cout << "Ingrese base: ";
    cin >> ingresarBase;

    cout << "Ingrese altura: ";
    cin >> ingresarAtura;

    solucionArea = 2 * (ingresarLongitud * ingresarBase + ingresarBase * ingresarAtura + ingresarLongitud * ingresarAtura);
    solucionVolumen = ingresarLongitud * ingresarBase * ingresarAtura;
    cout << "Por lo tanto el volumen del paralelepipedo es " << solucionVolumen << " cm3 y el área superficial es " << solucionArea << " cm2.";

    return 0;
}

int main()
{

    int opcion;
    float ingresaRadio, ingresaAltura, volumen, radio, solucion, solucion2;              /*variables cilindro*/
    float ingresaMetross, solucionMetrosPulgadass;                                       /*variables metros a pulgadas*/
    float ingreseLongitud, ingreseBase, ingreseAlturas, respuestaVolumen, respuestaArea; /*variables de un paralelepípedo*/
    const float PI = 3.14159;
    const float pulgadas = 39.3701;

    cout << "1. Hallar volumen de cilindro." << endl;
    cout << "2. Calcular metros a pulgadas." << endl;
    cout << "3. Hallar area y volumen paralelepipedo" << endl;
    cout << "Cual vas elegir 1 - 3: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        /*
            cout << "Ingresa radio: ";
            cin >> ingresaRadio;

            cout << "Ingresa altura: ";
            cin >> ingresaAltura;

            radio = pow(ingresaRadio, 2);
            volumen = (PI * (radio * ingresaAltura));

            cout << "El volumen del cilindro es: " << volumen << " cm3.";
        */
        solucion = cilindro(ingresaRadio, ingresaAltura, radio, volumen);
        cout << "El volumen del cilindro es: " << solucion;
        break;

    case 2:
        /*
            cout << "Imgresa una cifra en Metros: ";
            cin >> ingresaMetros;
            if (ingresaMetros > 1)
            {
                solucionMetrosPulgadas = ingresaMetros * pulgadas;
                cout << "El equivalentes de " << ingresaMetros << " metros a pulgadas es: " << solucionMetrosPulgadas;
            }
            else
            {
                solucionMetrosPulgadas = ingresaMetros * pulgadas;
                cout << "El equivalentes de " << ingresaMetros << " metro a una pulgada es: " << solucionMetrosPulgadas;
            };
        */
        solucion = metrosPulgadas(ingresaMetross, solucionMetrosPulgadass);
        cout << "El equivalentes de " << solucion;
        break;

    case 3:
        /* volumen = a.b.c */
        /* area = 2(ab + bc + ac)*/
        /*
        cout << "Ingrese longitud: ";
        cin >> ingreseLongitud;

        cout << "Ingrese base: ";
        cin >> ingreseBase;

        cout << "Ingrese altura: ";
        cin >> ingreseAlturas;

        respuestaVolumen = ingreseLongitud * ingreseBase * ingreseAlturas;
        cout << "El volumen es: " << respuestaVolumen << endl;

        respuestaArea = 2 * (ingreseLongitud * ingreseBase + ingreseBase * ingreseAlturas + ingreseLongitud * ingreseAlturas);
        cout << "El area es: " << respuestaArea;
        */

        solucion = paralelepípedo(ingreseLongitud, ingreseBase, ingreseAlturas, respuestaVolumen, respuestaArea);

        cout << solucion;

        break;

    default:
        cout << "Debes elegir entre 1 - 3.";
        break;
    }
}