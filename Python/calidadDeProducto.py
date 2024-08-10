
ingresaPesoDeLaPieza = float(input("Ingresa el peso de la pieza: "))
ingresaLongitudDeLaPieza = float(input("Ingresa la longitus de la pieza: "))
ingresaElDiametroDeLAPieza = float(input("Ingresa el diametro de la pieza: "))

if ((ingresaPesoDeLaPieza >= 50 and ingresaPesoDeLaPieza <= 60) and  
    (ingresaLongitudDeLaPieza >= 10 and ingresaLongitudDeLaPieza <= 15) and  
    (ingresaElDiametroDeLAPieza == 2 or ingresaElDiametroDeLAPieza == 3)):

    print(f"El peso de la pieza es: {ingresaPesoDeLaPieza}.")
    print(f"La longitud de la pieza es: {ingresaLongitudDeLaPieza}.")
    print(f"El diámetro de la pieza es: {ingresaElDiametroDeLAPieza}.")
    print("El estado de la pieza es ACEPTABLE.")

elif (((ingresaPesoDeLaPieza <= 45 and ingresaPesoDeLaPieza <= 49) or (ingresaPesoDeLaPieza <=61 and ingresaPesoDeLaPieza <= 65)) and ((ingresaLongitudDeLaPieza <= 8 or ingresaLongitudDeLaPieza <= 9) or (ingresaLongitudDeLaPieza <= 16 or ingresaLongitudDeLaPieza <= 17)) and ((ingresaElDiametroDeLAPieza == 1.8 or ingresaElDiametroDeLAPieza == 1.9) or (ingresaLongitudDeLaPieza == 3.1 and ingresaLongitudDeLaPieza == 3.2))):

    print(f"El peso de la pieza es: {ingresaPesoDeLaPieza}.")
    print(f"La longitud de la pieza es: {ingresaLongitudDeLaPieza}.")
    print(f"El diámetro de la pieza es: {ingresaElDiametroDeLAPieza}.")
    print("El estado de la pieza necesita RETRABAJO.")

else:
    print(f"El peso de la pieza es: {ingresaPesoDeLaPieza}.")
    print(f"La longitud de la pieza es: {ingresaLongitudDeLaPieza}.")
    print(f"El diámetro de la pieza es: {ingresaElDiametroDeLAPieza}.")
    print("El estado de la pieza esta RECHAZADA.")