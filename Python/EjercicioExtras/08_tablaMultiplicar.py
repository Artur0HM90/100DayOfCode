# Tabla de multiplicar: Solicita un número al usuario y utiliza un bucle for para imprimir la tabla de multiplicar de ese número del 1 al 10.

ingresaNumero = int(input("Ingresa un Número: "))

multiplicar = 1

for i in range(1, ingresaNumero + 1):
    print(f"Tabla de multiplicar {i}")
    print("-----------------------")
    for j in range(1, 11):
        multiplicar *= j
        print (f"{i} x {j} = {i * j}")
    print("-----------------------")
