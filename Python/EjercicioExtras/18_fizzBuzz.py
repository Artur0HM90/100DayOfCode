"""
 * Escribe un programa que muestre por consola (con un print) los
 * números de 1 a 100 (ambos incluidos y con un salto de línea entre
 * cada impresión), sustituyendo los siguientes:
 * - Múltiplos de 3 por la palabra "fizz".
 * - Múltiplos de 5 por la palabra "buzz".
 * - Múltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz".
"""

"""AHORA VAMOS ELEGIR EL LIMITE (1 - ?) Y TAMBIEN ELEGIREMOS QUE MULTIPLOS VAMOS A SACAR"""

# Secuencias ANSI para cambiar color del texto
RED = "\033[31m"
GREEN = "\033[32m"
YELLOW = "\033[33m"
BLUE = "\033[34m"
MAGENTA = "\033[35m"
CYAN = "\033[36m"
WHITE = "\033[37m" 

# Secuencia ANSI para restablecer colores y estilos
RESET = "\033[0m"


primeraPalabra = "fizz"
segundaPalabra = "buzz"

IngresaLimite = int(input("Ingresa el limite de busqueda (1 - ?): "))
print(GREEN + "-------------------------------------------" + RESET)
print(GREEN + "INGRESA 2 NÚMEROS PARA SABER SUS MULTIPLOS" + RESET)
print(GREEN + "-------------------------------------------" + RESET)
ingresaElPrimerMultiplo = int(input(YELLOW + "Ingresa el primer número: " + RESET))
ingresaElSegundoMultiplo = int(input(BLUE + "Ingresa el segundo número: " + RESET))
print(RED + "-------------------------------" + RESET)

for i in range(1, IngresaLimite + 1):
    if i % ingresaElPrimerMultiplo == 0:
        print(YELLOW + f"Es multiplo de {ingresaElPrimerMultiplo}: {i} -> {primeraPalabra}" + RESET)
    
    elif i % ingresaElSegundoMultiplo == 0:
        print(BLUE + f"Es multiplo de {ingresaElSegundoMultiplo}: {i} -> {segundaPalabra}" + RESET)
    
for i in range (1, 101):
    if ((i % ingresaElPrimerMultiplo == 0) and (i % ingresaElSegundoMultiplo ==0)):
        print(CYAN + f"Es multiplo de {ingresaElPrimerMultiplo} y {ingresaElSegundoMultiplo}: {i} -> {primeraPalabra + segundaPalabra}" + RESET)
