def suma(num1, num2):
    return num1 + num2

def resta(num1, num2):
    return num1 - num2

def multiplicacion(num1, num2):
    return num1 * num2

def division(num1, num2):
    return num1 / num2

opcion = float(input("""CALCULADORA
1. Suma
2. Resta
3. Multiplicación
4. División
Elige entre 1 - 4: """))

ingresePrimerNumero = float(input("Ingrese primer número: "))
ingreseSegundoNumero = float(input("Ingrese segundo número: "))
resultado = 0

def calcualdora(opcion, num1, num2):
    if opcion == 1:
        print("ELEGISTE LA SUMA.")
        print(f"El resultad es: {suma(ingresePrimerNumero, ingreseSegundoNumero)}")

    elif opcion == 2:
        print("ELEGISTE LA RESTA.")
        print(f"El resultad es: {resta(ingresePrimerNumero, ingreseSegundoNumero)}")

    elif opcion == 3:
        print("ELEGISTE LA MULTIPLICACIÓN.")
        print(f"El resultad es: {multiplicacion(ingresePrimerNumero, ingreseSegundoNumero)}")

    elif opcion == 4:
        print("ELEGISTE LA DIVISIÓN.")
        if ingreseSegundoNumero == 0:
            print("No se puede dividir entre CERO")
        else:
            print(f"El resultad es: {division(ingresePrimerNumero, ingreseSegundoNumero)}")

calcualdora(opcion, ingresePrimerNumero, ingreseSegundoNumero)