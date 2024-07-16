opciones = int(input("""
1. SUMA
2. RESTA
3. MULTIPLICACIOM
4. DIVISION
Elige entre 1 - 4: """))

ingresePrimerNumero = float(input("Ingrese primer número: "))
ingreseSegundoNumero = float(input("Ingrese segundo número: "))
#resultado = 0


def calculadora(case, num1, num2 ):
    if case == 1:
        return num1 + num2

    elif case == 2:
        return num1 - num2

    elif case == 3:
        return num1 * num2

    elif case == 4:
        if num2 == 0:
            print("No puedes dividir entre CERO.")
        else:
            return num1 / num2
    else:
        return "ERROR - Elegige entre 1 - 4"

resultado = calculadora(opciones, ingresePrimerNumero, ingreseSegundoNumero)
print(f"El resultado es {resultado}")