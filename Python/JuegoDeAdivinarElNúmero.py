ingresaNumeroOcult0 = int(input("Ingresa el número oculto: "))
ingresaNumero = 0
while ingresaNumeroOcult0 != ingresaNumero:
    ingresaNumero = int(input("Adivina el numero oculto: "))
    if ingresaNumeroOcult0 == ingresaNumero:
        print(f"BIEN adivinaste el número oculto es {ingresaNumero}")
        break
    print("ERROR - intenta otra vez")