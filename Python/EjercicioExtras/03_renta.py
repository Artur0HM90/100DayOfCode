# Elaborar un programa que calcule el impuesto de la renta a pagar (5%), solo si su monto de renta anual supera las 7 UlTs.

uit = 5150 * 7
porcentajeImpuesto = 0.05

ingresaTuRentaAnual = float(input("Ingresa tu renta anual: "))

if ingresaTuRentaAnual >= uit:
    print (f"Tu ingreso anual es de: {ingresaTuRentaAnual} debes pagar 5% en impuestos.")
    impuesto = ingresaTuRentaAnual * porcentajeImpuesto
    print (f"Debes de pagar {impuesto:.2f} dolares en impuestos.")
    totalApagarEsteaño = ingresaTuRentaAnual + impuesto
    print (f"Total a pagar este año es: ${totalApagarEsteaño:.2f} dolares")
    
else:
    print ("No superas los 7 UITs no pagas impuestos.")
    print(f"Tu monto a pagar es de : {ingresaTuRentaAnual:.2f} dolares.")