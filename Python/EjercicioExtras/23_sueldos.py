"""
Desarrollar el algoritmo que te permita ingresar un sueldo ficticio y calcular lo siguiente:
• Sueldo de María disminuyeron el 5% de inasistencias y le descontaron 25.
• Sueldo de Juan le incrementaron 23% por comisiones más 72 de horas extra.
• Sueldo de Patricio le incrementaron un 5% pero le descontaron 56.
Se pide mostrar el sueldo de cada empelado y la suma de sus sueldos.
"""

descuentoEincrementoEnPorcentaje = 0.05
primerDescuento = 25
segundoDescuento = 56
incrementoPorcentaje = 0.23

sueldoConDescuento = 0
sueldoConIncremento = 0
sueldoConIncrementoYDescuento = 0
sumaDeSueldos = 0

ingreseSueldo = float(input("Ingresa el sueldo de los trabajadores: "))

sueldoConDescuento = ((ingreseSueldo - (ingreseSueldo * descuentoEincrementoEnPorcentaje)) - primerDescuento)
print(f"El sueldo de Maria es de: {sueldoConDescuento:.2f} dolares.")

sueldoConIncremento = (ingreseSueldo + (ingreseSueldo * incrementoPorcentaje))
print(f"El sueldo de Juan con las horas extras es de : {sueldoConIncremento:.2f} dolares.")

sueldoConIncrementoYDescuento = ((ingreseSueldo + (ingreseSueldo * descuentoEincrementoEnPorcentaje)) - segundoDescuento)
print(f"El sueldo de Patricop es de: {sueldoConIncrementoYDescuento:.2f} dolares.")

sumaDeSueldos = sueldoConDescuento + sueldoConIncremento + sueldoConIncrementoYDescuento

print(f"La suma de los 3 sueldos es de: {sumaDeSueldos:.2f} dolares.")