# Elaborar un programa que verifique que, si un número es par se lo multiplique por 3 y se lo eleve al cuadrado.

ingreseNumero = int(input("Ingresa un número: "))

if ingreseNumero % 2 == 0:
    primerSolucion = ingreseNumero * 3
    segundaSolucion = pow(primerSolucion, 2)
    print(f"El resultado es: {segundaSolucion}")