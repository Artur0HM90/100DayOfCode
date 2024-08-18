# 47. Juego de adivinar el número: Escribe un juego donde el usuario debe adivinar un número aleatorio.

intentos = 0

while intentos < 3:
    print("Cuanto es 1 + 1")
    opcion = int(input("""[1] 15
[2] 3
[3] 2
[4] 7
cual eliges : """))
    
    if opcion == 3:
        print(f"Correcto. La suma es 2")
        break
    else:
        print("Fallaste, intentalo otra vez ")
        intentos += 1

if intentos == 3:
    print("Lo siento a0gotaste tus inentos")


while intentos < 3:
    print("Cuanto es 1 + 5")
    opcion = int(input("""[1] 15
[2] 3
[3] 2
[4] 6
cual eliges : """))
    
    if opcion == 3:
        print(f"Correcto. La suma es 6")
        break
    else:
        print("Fallaste, intentalo otra vez ")
        intentos += 1

if intentos == 3:
    print("Lo siento a0gotaste tus inentos")