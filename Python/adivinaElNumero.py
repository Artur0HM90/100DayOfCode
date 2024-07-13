ingresaNumeroSecreto = float(input("Ingresa número secreto: "))
ingresaNumero = float(input("Ingresa número: "))

while ingresaNumero != ingresaNumeroSecreto:
    #print("INCORRECTO - Intentalo otra vez: ")
    ingresaNumero = float(input("INCORRECTO - Intentalo otra vez: "))

print(f"¡CORRECTO - El número secreto era {ingresaNumero}")