"""
Se pide el algoritmo para realizar la transformación de kilómetros a:
• Metros.
• Pulgadas.
• Pies.
Sabiendo que 1 km = 1000 metros / 3280.84 pies / 39370 pulgadas
"""

metros = 1000
pies = 3280.84
pulgadas = 39370.1
#resultado = 0

opcion = int(input("""1. Kilometros a metros.
2. Kilometros a Pies.
3. Kilometros a Pulgadas.
Elige 1 - 3: """))

match (opcion):
    case 1:
        print("Elegiste Kilometros a metros.")
        ingreseKilometros = float(input("Ingrese cunotas kilometros recorrio: "))
        if ingreseKilometros <= 1:
            resultado = ingreseKilometros * metros
            print(f"{ingreseKilometros} kilometro a metros es: {resultado} metros.")
        else:
            resultado = ingreseKilometros * metros
            print(f"{ingreseKilometros} kilometros a metros es: {resultado} metros.")

    case 2:
        print("Kilometros a Pies.")
        ingreseKilometros = float(input("Ingrese cunotas kilometros recorrio: "))
        if ingreseKilometros <= 1:
            resultado = ingreseKilometros * pies
            print(f"{ingreseKilometros} kilometro a pies es: {resultado} pies.")
        else:
            resultado = ingreseKilometros * pies
            print(f"{ingreseKilometros} kilometros a pies es: {resultado} pies.")

    case 3:
        print("Kilometros a Pulgadas.")
        ingreseKilometros = float(input("Ingrese cunotas kilometros recorrio: "))
        if ingreseKilometros <= 1:
            resultado = ingreseKilometros * pulgadas
            print(f"{ingreseKilometros} kilometro a pulgadas es: {resultado} pulgadas.")
        else:
            resultado = ingreseKilometros * pulgadas
            print(f"{ingreseKilometros} kilometros a pulgadas es: {resultado} pulgadas.")

    case _:
        print("Debes elegir entre 1 - 3.")