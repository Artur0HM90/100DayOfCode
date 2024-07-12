cuantasNotasVasIngresar = int(input("Cuantas notas vas a ingresar: "))
promedio = 0

for i in range (1, cuantasNotasVasIngresar + 1):
    notas = input(f"Calificación {i}: ")
    notas = float(notas)
    promedio += notas / cuantasNotasVasIngresar

print(f"Promedio final: {round(promedio)}")

if promedio < 3:
    print("Tu calificación es F.")

elif promedio < 8:
    print("Tu calificación es: D.")

elif promedio < 11:
    print("Tu calificación es: C.")

elif promedio < 15:
    print("Tu calificación es: B.")

else:
    print("Tu calificación es: A.")
    
