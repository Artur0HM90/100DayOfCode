# Sumar elementos de una lista: Suma todos los elementos de una lista.

# listaNumeros = [1,8,4,9,10,14,6,7,5,1] -> 65



sumar = 0
miLista = []

ingreseLimite = int(input("Ingresa cunatos números vas ingresar: "))

for i in range(1, ingreseLimite + 1):
    numero = int(input(f"{i}. Ingresa {i} número: "))
    #print(f"{i}. Número: ")
    miLista.append(numero)

for j in miLista:
    sumar += j
print(f"La suma de la lista es: {sumar}")