# Repetir un mensaje: Solicita un mensaje al usuario y un número de repeticiones, luego usa un for para imprimir el mensaje ese número de veces.

ingresaMenasje = input("Ingresa un mejsane: ")
ingresaCantidad = int(input("Ingresa cuantas veces se va repetir: "))

for i in range(1, ingresaCantidad + 1):
    print (f"{i}. {ingresaMenasje}")