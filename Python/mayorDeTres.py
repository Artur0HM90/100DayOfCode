primerNumero = float(input("Ingresa primer número: "))
segundoNumero = float(input("Ingresa segundo número: "))
tercerNumero = float(input("Ingresa tercer número: "))

if ((primerNumero > segundoNumero) and (primerNumero > tercerNumero)):
    print(f"El primer número es el mayor {primerNumero}")
elif ((segundoNumero > primerNumero) and (segundoNumero > tercerNumero)):
    print(f"El primer número es el mayor {segundoNumero}")
else:
    print(f"El primer número es el mayor {tercerNumero}")