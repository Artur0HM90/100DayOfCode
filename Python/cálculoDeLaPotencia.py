def potencia(numero, potencia):
    return pow(numero, potencia)

ingresaNumero = float(input("Ingresa número: "))
ingresaPtencia = int(input("Ingresa potencia: "))

print(f"La potencia es {potencia(ingresaNumero, ingresaPtencia)}")