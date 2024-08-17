# Ordenar números: Ordena tres números en orden ascendente.

ingreseLimite = int(input("Ingresa limite de ingreso: "))

for i in range (1, ingreseLimite + 1):



    numeros = [4,5,1,6,0,2,4,3]
    print("Lista de números")
    print(f"{numeros}")

    print("Lista de números ordenadas.")
    numeros.sort()
    print(numeros)
    print("Lista de números descendente.")
    numeros.sort(reverse=True)
    print(numeros)