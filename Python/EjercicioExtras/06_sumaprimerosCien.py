# Suma de los primeros 100 números: Calcula la suma de los números del 1 al 100 utilizando un bucle for.
# ahora designaremos hasta que número se sumara.

IngresaNumero = int(input("Ingresa un número entero: "))
suma = 0

for i in range (1, IngresaNumero + 1):
    suma += i
print(suma)

