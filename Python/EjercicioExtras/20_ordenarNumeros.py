# Ordenar números: Ordena tres números en orden ascendente.

ingreseLimite = int(input("Ingresa limite de ingreso: "))
listaNumero = []

for i in range (1, ingreseLimite + 1):
    ingreseNumero = float(input(f"Ingrese {i}: "))
    listaNumero.append(f"{ingreseNumero:.0f}")

    # numeros = [4,5,1,6,0,2,4,3]
    # print("Lista de números")
    #print(f"{numeros}")

print("Lista de números ordenadas.")
listaNumero.sort()
print(listaNumero)

print("Lista de números descendente.")
listaNumero.sort(reverse=True)
print(listaNumero)
