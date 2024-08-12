# Factorial de un número: Calcula el factorial de un número dado por el usuario usando un bucle for.

ingreseNumero = int(input("Ingrese un númer: "))

factorial = 1

for i in range(1, ingreseNumero + 1):
    factorial *= i
print(f"Factorial de {ingreseNumero} es : {factorial}")