# Escribí un programa que solicite al usuario dos números y los almacene en dos variables. En otra variable, almacená el resultado de la suma de esos dos números y luego mostrá ese resultado en pantalla. A continuación, el programa debe solicitar al usuario que ingrese un tercer número, el cual se debe almacenar en una nueva variable. Por último, mostrá en pantalla el resultado de la multiplicación de este nuevo número por el resultado de la suma anterior.

ingresaPrimerNumero = float(input("Ingresa primer número: "))
ingresaSegundoNumero = float(input("Ingresa segundo número: "))

sumaDeNumeros = ingresaPrimerNumero + ingresaSegundoNumero

print(f"La suma de {ingresaPrimerNumero} + {ingresaSegundoNumero} = {sumaDeNumeros:.2f}")

ingreseTercerNumero = float(input("Ingrese tercer número: "))

multiplicacion = ingreseTercerNumero * sumaDeNumeros

print(f"La multiplicación de {ingreseTercerNumero} x {sumaDeNumeros} = {multiplicacion:.2f}")