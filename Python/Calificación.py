ingresaCantidadDeCalificaciones = int(input("Ingresa cuantas calificaciones ingresaras: "))
promedio = 0

for i in range (1, ingresaCantidadDeCalificaciones + 1):
    notas = float(input(f"Calificación {i}: "))
    promedio += notas / ingresaCantidadDeCalificaciones
print(f"Tu promedio final es: {promedio}")