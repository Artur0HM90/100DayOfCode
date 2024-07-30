"""Calculadora hecho con Funciones"""

def calculadora():
    opcion = int(input("""1.Suma\n2.Resta.\n3. Multiplicación.\n4. División.\nElige entre 1 - 4: """))
    num1 = float(input("Ingresa el primer número: "))
    num2 = float(input("Ingresa el el segundo número: "))

    return elegir_case(opcion, num1, num2)

def elegir_case(opcion, num1, num2):
    if opcion == 1:
        resultado = num1 + num2
    elif opcion == 2:
        resultado = num1 - num2
    elif opcion == 3:
        resultado = num1 * num2
    elif opcion == 4:
        if num2 == 0:
            print("No se puede dividir entre CERO.")
        else:
            resultado = num1 / num2
    else:
        print("ERROR - Debes elegir entre 1 - 4")

    return resultado

solucion = calculadora()
if solucion:
    print(f"El resultado de la opreación: {solucion}")
else:
    print("No se pudo realizar la operacion")