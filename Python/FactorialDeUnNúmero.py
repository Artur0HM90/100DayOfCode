ingresaNumero = int(input("Ingresa un número: "))
factorial = 1

for i in range (1, ingresaNumero + 1):
    factorial *= i
    print (f"El factorial de {ingresaNumero} es: {factorial}")
