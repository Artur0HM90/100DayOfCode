ingresePrecioDelProducto = float(input("Ingrese el precio del producto: "))
descuento = 0.60
descuentoConPorcentaje = ingresePrecioDelProducto * descuento

print (f"El precio del producto es: ${ingresePrecioDelProducto:.0f} dolares.")
print (f"El descuento es: ${descuentoConPorcentaje:.0f} dolares.")
print (f"Precio total a pagar es: ${ingresePrecioDelProducto - descuentoConPorcentaje:.0f} dolares.")