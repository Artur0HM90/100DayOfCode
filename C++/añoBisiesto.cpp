#include <iostream>
using namespace std;

#define RED "\033[31m"   /*COLOR ROJO*/
#define GREEN "\033[32m" /*COLOR VERDE*/
#define BLUE "\033[34m"  /*COLOR AZUL*/
#define RESET "\033[0m"

int main()
{
    int ingreseAno;
    cout << "Ingresa un año: ";
    cin >> ingreseAno;

    if ((ingreseAno % 4 == 0) && (ingreseAno % 100 != 0) || (ingreseAno % 400 == 0))
    {
        cout << GREEN << "El año " << ingreseAno << " es BISIESTO.";
    }
    else
    {
        cout << RED << "El año " << ingreseAno << " NO ES BISIESTO.";
    }
}

/*

Es divisible entre 4 pero no es divisible entre 100.
Es divisible entre 400.


*/