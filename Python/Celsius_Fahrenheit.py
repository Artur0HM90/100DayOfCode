mensaje = f"""
Que deseas convertir
1: Grados Celsius a Grados Fahrenheit
2: Grados Fahrenheit a Grados Celsius
"""
print(mensaje)
mensaje = input("Ingresa 1 - 2: ")

if mensaje == "1":
    ingresaGradosCelsius = int(input("Ingresa grados Celsius: "))
    formula = (ingresaGradosCelsius * 9/5 ) + 32
    print (formula)

elif mensaje == "2":
    ingresaGradosFahrenheit = int(input("Ingresa grados Celsius: "))
    formula = (ingresaGradosFahrenheit - 32) * 5/9
    print (formula)
else:
    print("ERROR - Debes ingresar entre las dos opciones.")