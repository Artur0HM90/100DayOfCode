# 34. Juego de adivinanza: Programa que permita al usuario jugar a adivinar la pregunta correcta intentos limitados.
puntos = 0
intentos = 0

while intentos < 3:
    intentos += 1
    print("=================")
    print("PRIMERA PREGUNTA")
    print("=================")
    print("1. El periodo en el que aparecieron la agricultura y los asentamientos sedentarios se llama.")
    print("1. Neolítico.")
    print("2. Edad Media..")
    print("3. Paleolítico.")
    primeraPregunta = int(input("Ingresa 1 - 3: "))
    if primeraPregunta == 1:
        print("===================")
        print("Respuesta correcta")
        print("===================")
        print("El periodo neolítico se inició hace unos diez mil años, es decir, hacia el 8000 a.C. La práctica de la agricultura y la ganadería produjeron gigantescos cambios sociales. La vida en asentamientos (pueblos y ciudades) necesitó de una organización política y económica más compleja y especializada.\n")
        puntos += 7
        break

    else:
        if intentos < 3:
            print("============================")
            print("Fallaste intentalo otra vez")
            print("============================")

if intentos == 3:
    print("========================")
    print("Agotaste tus 3 intentos")
    print("========================")

# SEGUNDA PREGUNTA 
intentos = 0
while intentos < 3:
    intentos += 1
    print("=================")
    print("SEGUNDA PREGUNTA")
    print("=================")
    print("2. ¿Cuándo se inventó la escritura?")
    print("1. Hace 20 mil años..")
    print("2. En el IV milenio a.C..")
    print("3. En el año 0.")
    segundaPregunta = int(input("Ingresa 1 - 3: "))
    if segundaPregunta == 2 :
        print("===================")
        print("Respuesta correcta")
        print("===================")
        print("Los primeros sistemas de escritura se originaron hacia el 3500 a.C. en la región de Mesopotamia, actual Irak. Los sumerios utilizaron estiletes que presionaban sobre tablillas de arcilla para mantener las cuentas de sus negocios, y luego también para crear obras literarias. Este estilo de escritura es conocido como cuneiforme.\n")
        puntos += 6
        break

    else:
        if intentos < 3:
            print("============================")
            print("Fallaste intentalo otra vez")
            print("============================")

if intentos == 3:
    print("========================")
    print("Agotaste tus 3 intentos")
    print("========================")


#TERCERA PREGUNTA 
intentos = 0
while intentos < 3:
    intentos += 1
    print("=================")
    print("TERCERA PREGUNTA")
    print("=================")
    print("3. ¿Cómo se llamaban los gobernantes del antiguo Egipto?")
    print("1. Faraones.")
    print("2. Basileos.")
    print("3. Alcaldes.")
    segundaPregunta = int(input("Ingresa 1 - 3: "))
    if segundaPregunta == 1 :
        print("===================")
        print("Respuesta correcta")
        print("===================")
        print("Faraón era el título dado a los antiguos reyes de Egipto. Además de ser gobernantes, los faraones eran considerados seres emparentados con los dioses.\n")
        puntos += 7
        break

    else:
        if intentos < 3:
            print("============================")
            print("Fallaste intentalo otra vez")
            print("============================")

if intentos == 3:
    print("========================")
    print("Agotaste tus 3 intentos")
    print("========================")

print(f"Tota de puntos obtenidos es de: {puntos} puntos")
