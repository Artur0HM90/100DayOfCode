# Encontrar el máximo de una lista: Dada una lista de números, utiliza un bucle for para encontrar el número más grande.

miLista = []

ingresaCuantosNumerosVasIngresar = int(input("Cuantos numeros vas a ingresar: "))
for i in range(1, ingresaCuantosNumerosVasIngresar + 1):
    ingresaNumero = float(input(f"{i}. Número: "))
    miLista.append(ingresaNumero)  # para almacenar la lista que creamos

#miLista = [1,2,5,6,10,15,78,45,4.5,4]
valoMasAlto = max(miLista)
print(f"El número mayor de la lista es : {valoMasAlto:.0f}")