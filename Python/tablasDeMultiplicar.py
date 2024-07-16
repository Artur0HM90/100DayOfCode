ingresaHastaQueTabla = int(input("Ingresa hasta que tabla vas a imprimir: "))
ingresaHastaQueNumeroVasMulti = int(input("Ingresa hasta que número vas a multiplicar: "))

for i in range (1, ingresaHastaQueTabla + 1):
    for x in range (1, ingresaHastaQueNumeroVasMulti + 1):
        print (f"{i} x {x} = {i*x} ")
    print("------------------")