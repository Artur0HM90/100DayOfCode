# Imprimir números pares: Usa un bucle for para imprimir los números pares del 1 al 20.
# ahora vamos elgir entre pares e impares y ahora vanos ingresar nosotros el número

print("Que deseas hacer")
opcion = int(input("""1. Pares
2. Impares
Elige 1 - 2: """))

ingresaNumero = int(input("Ingresa un número: "))

match (opcion):
    case 1:
        print(f"Los número PARES de {ingresaNumero}")
        for i in range (2, ingresaNumero + 1, 2):
            print(i)
    case 2:
        print(f"Los número IMPARES de {ingresaNumero}")
        for i in range (1, ingresaNumero + 1, 2):
            print(i)