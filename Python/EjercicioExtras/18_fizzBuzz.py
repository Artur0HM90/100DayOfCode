"""
 * Escribe un programa que muestre por consola (con un print) los
 * números de 1 a 100 (ambos incluidos y con un salto de línea entre
 * cada impresión), sustituyendo los siguientes:
 * - Múltiplos de 3 por la palabra "fizz".
 * - Múltiplos de 5 por la palabra "buzz".
 * - Múltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz".
"""

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

for i in range (1, 101):
    if i % 3 == 0:
        print(YELLOW + f"Es multiplo de 3: {i} -> {primeraPalabra}" + RESET)
    
    elif i % 5 == 0:
        print(BLUE + f"Es multiplo de 5: {i} -> {segundaPalabra}" + RESET)
    

for i in range (1, 101):
    if ((i % 3 == 0) and (i % 5 ==0)):
        print(CYAN + f"Es multiplo de 3 y 5: {i} -> {primeraPalabra + segundaPalabra}" + RESET)
