ingresaNumero = int(input("Ingresa un número hasta donde quieres que sume: "))
suma = 0

for i in range (1, ingresaNumero + 1):
    if i % 2 != 0:
        suma += i
        print(suma)