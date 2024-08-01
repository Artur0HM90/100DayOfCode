# Elaborar un programa que verifique si un número es impar y múltiplo de 5.

ingreseUnNumero = float(input("Ingrese un número: "))

if (ingreseUnNumero % 5 == 0) and (ingreseUnNumero % 2 != 0):
    print(f"El número {ingreseUnNumero:.0f} es IMPAR y MULTIPLO DE 5")
else:
    print("El número ingresado no es impar ni múltiplo de 5")