/*
Calcular el pago a recibir en base a las horas trabajadas y la tarifa ingresada. Si existen horas extra al jornal máximo (40 horas) deberá considerar un pago extra del 15% por la diferencia de horas. */

#include <iostream>
using namespace std;

int main()
{
    int ingreseHorasTrabajadas;
    const int horasTrabajadasNormalesPorSemana = 40;
    const float pagoPorHoras = 25;
    const float pagoExtra = 0.15;
    float pagoNormal;
    float pagoPorHorasExtras, horasExtrastrabajadas, pagoPorLasHorasExrasTrabajadas, pagoExtras;

    cout << "Ingresa las horas trabajadas: ";
    cin >> ingreseHorasTrabajadas;

    if (ingreseHorasTrabajadas <= 40)
    {
        pagoNormal = ingreseHorasTrabajadas * pagoPorHoras;
        cout << "Esta semana trabajaste " << ingreseHorasTrabajadas << " horas, tu pago es de " << pagoNormal << " dolares.";
    }
    else if (ingreseHorasTrabajadas > 40)
    {
        /*Horas trabajadas extras*/
        horasExtrastrabajadas = ingreseHorasTrabajadas - horasTrabajadasNormalesPorSemana;

        /*pago del 15% extra por horas trabajadas*/
        pagoPorHorasExtras = pagoPorHoras * pagoExtra;

        /*la suma del pago normal mas el 15% extras*/
        pagoExtras = pagoPorHoras + pagoPorHorasExtras;

        cout << "Horas trabajadas esta semana es: " << horasTrabajadasNormalesPorSemana << " horas." << endl;
        cout << "Horas extras trabajadas: " << horasExtrastrabajadas << " horas." << endl;
        cout << "Total de horas trabajadas es: " << horasTrabajadasNormalesPorSemana + horasExtrastrabajadas << " horas" << endl;

        cout << "Tu pago es de : " << pagoExtras + pagoPorHoras << " dolares.";

        return 0;
    }
}