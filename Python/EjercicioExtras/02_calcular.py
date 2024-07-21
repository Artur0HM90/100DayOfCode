"""
1. Calcular el valor de a, si a=(b+3)/2.
2. Calcular el promedio de los valores numéricos de a, b y c.
3. Calcular el valor de la velocidad v dados la distancia d y el tiempo t.
4. Calcular el área del rectángulo dados los valores de la base b y la altura h.
"""

opcion = int(input("""1. Calcular si a=(b+3)/2.
2. Calcular el promedio.
3. Calcular velocidad - distancia y tiempo.
4. Calcular área del rectángulo"
Elige entre 1 - 4: """))

match opcion:
    case 1:
        print("Elegiste calcular si a=(b+3)/2.")
        ingresaValorB = float(input("Ingresa el valor de B: "))
        resultado = ((ingresaValorB + 3) / 2)
        print(f"El resultado es: {resultado}")

    case 2:
        print("Elegiste calcular promedio")
        promedio = 0
        ingresaCantidadDeNotas = int(input("Cuantas calificafiones vas a ingresar: "))
        for i in range (1, ingresaCantidadDeNotas + 1):
            ingrsaNotas = float(input(f"Calificación {i}:"))
            promedio += ingrsaNotas / ingresaCantidadDeNotas
        print (f"Promedio final es: {promedio}")
        if promedio < 6:
            print("Tu calificación es C.")
        if promedio < 13:
            print("Tu calificación es B.")
        else:
            print("Tu calificación es A.")
        
    case 3:
        print("Elegiste distancia d y el tiempo t")
        ingresaDistancia = float(input("Ingresa distancia: "))
        ingresaTiempo = float(input("Ingresa tiempo: "))
        velocidad = ingresaDistancia * ingresaTiempo
        print(f"La velocidad es {velocidad} km/hr")

    case 4: 
        print("Elegiste área del rectángulo")
        ingresaBase = float(input("Ingresa base del rectangulo: "))
        ingresaAltura = float(input("Ingresa altura del rectangulo: "))
        area = ingresaBase * ingresaAltura
        print(f"El area del rectangulo es {area}")
        
    case _:
        print("ERROR - opcion no valida")