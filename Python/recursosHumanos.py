primerDesenpeño = "Exelente"
segundoDesenpeño = "Bueno"
tercerDesenpeño = "Regular"
cuartoDesenpeño = "Deficiente"

primeraBonificacion = 15
segundaBonificacion = 5
terceraBonificacion = 7
cuartaBonificacion = 3
quintaBonificacion = 2
sextaBonificacion = 0
bonificacionExecelenteBueno = 10


opcion = 0

tiempoTrabajado = 0 # aqui ingresaremos en años.

tiempoTrabajado = int(input("Ingresa años laborados en la empresa: "))

if tiempoTrabajado > 10:

    print ("Desempeño es:")
    print ("1. Excelente")
    print ("2. Buemo:")
    print ("Desempeño es:")
    opcion = int(input("Elige 1 - 2: "))
    match (opcion):
        case 1:
            print(f"Trabajaste {tiempoTrabajado} años")
            print(f"Desenpeño es {primerDesenpeño}")
            print(f"tienes una bonificación de {primeraBonificacion}% este año.")

        case 2:
            print(f"Trabajaste {tiempoTrabajado} años")
            print(f"Desenpeño es {segundoDesenpeño}")
            print(f"tienes una bonificación de {bonificacionExecelenteBueno}% este año.")

            

elif tiempoTrabajado >= 5 and tiempoTrabajado <= 10:

    print ("Desempeño es:")
    print ("1. Excelente")
    print ("2. Buemo:")
    print ("Desempeño es:")
    opcion = int(input("Elige 1 - 2: "))
    match (opcion):
        case 1:
            print(f"Trabajaste {tiempoTrabajado} años")
            print(f"Desenpeño es {primerDesenpeño}")
            print(f"tienes una bonificación de {bonificacionExecelenteBueno}% este año.")

        case 2:
            print(f"Trabajaste {tiempoTrabajado} años")
            print(f"Desenpeño es {segundoDesenpeño}")
            print(f"tienes una bonificación de {terceraBonificacion}% este año.")


elif tiempoTrabajado >= 2 and tiempoTrabajado <= 4:
    
    print ("Desempeño es:")
    print ("1. Excelente")
    print ("2. Buemo:")
    print ("Desempeño es:")
    opcion = int(input("Elige 1 - 2: "))
    match (opcion):
        case 1:
            print(f"Trabajaste {tiempoTrabajado} años")
            print(f"Desenpeño es {primerDesenpeño}")
            print(f"tienes una bonificación de {segundaBonificacion}% este año.")

        case 2:
            print(f"Trabajaste {tiempoTrabajado} años")
            print(f"Desenpeño es {segundoDesenpeño}")
            print(f"tienes una bonificación de {cuartaBonificacion}% este año.")

elif tiempoTrabajado == 1:
    print(f"Trabajaste {tiempoTrabajado} años")
    print(f"Desenpeño es {tercerDesenpeño}")
    print(f"tienes una bonificación de {quintaBonificacion}% este año.")

else:
    print(f"Trabajaste {tiempoTrabajado} años")
    print(f"Desenpeño es {cuartoDesenpeño}")
    print(f"tienes una bonificación de {sextaBonificacion}% este año.")
