# 47. Juego de adivinar el número: Escribe un juego donde el usuario debe adivinar un número aleatorio.

intentos = 0

ingresaNumeroParaAdivinar = float(input("Ingresa número para adivinar: "))

print("Tienes 3 intentos.")
while intentos < 3:
    intentos += 1
    ingresaNumero = float(input(f"Ingresa el número oculto, {intentos} intentos: "))
    if ingresaNumeroParaAdivinar == ingresaNumero:

        print(f"Correcto el número oculto es {ingresaNumero}")
        break
    else:
        print("Fallaste, intenta otra vez.")
        
if intentos == 3:
    print("Agotaste tus intentos.")