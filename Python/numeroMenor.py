# Elaborar un algoritmo que encuentre el número menor entre 4 números.

ingresaPrimerNumero = float(input("Ingresa el primer número: "))
ingresaSegundoNumero = float(input("Ingresa el segundo número: "))
ingresaTercerNumero = float(input("Ingresa el tercer número: "))
ingresaCuartoNumero = float(input("Ingresa el cuarto número: "))

if (ingresaPrimerNumero < ingresaSegundoNumero) and (ingresaPrimerNumero < ingresaTercerNumero) and (ingresaPrimerNumero < ingresaCuartoNumero):
    print (f"El primer número es el menor {ingresaPrimerNumero:.0f}.")

elif (ingresaSegundoNumero < ingresaPrimerNumero) and (ingresaSegundoNumero < ingresaTercerNumero) and (ingresaSegundoNumero < ingresaCuartoNumero):
    print (f"El segundo número es el menor {ingresaSegundoNumero:.0f}.")

elif ((ingresaTercerNumero < ingresaPrimerNumero) and (ingresaTercerNumero < ingresaSegundoNumero) and (ingresaTercerNumero < ingresaCuartoNumero)):
    print (f"El tercer número es el menor {ingresaTercerNumero:.0f}")

else:
    print(f"El cuarto número es el menor {ingresaCuartoNumero:.0f}")