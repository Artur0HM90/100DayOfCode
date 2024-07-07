ingreseTabla = int(input("Ingresa que la tabla demultiplicar: "))
ingresaLimite = int(input ("Ingresa hasta donde quieres que multiplique 1 - ?: "))

for i in range (1, ingresaLimite + 1):
    print(f"{ingreseTabla} x {i} = {ingreseTabla * i} " )