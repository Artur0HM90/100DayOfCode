IngresaNumero = int(input("Ingresa número: "))
suma = 0

for i in range (1, IngresaNumero + 1):
    if i % 2 == 0:
        suma += i
        print (suma)