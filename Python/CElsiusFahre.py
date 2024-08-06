opcion = int(input("""1. Celsius a Fahrenheit.
2. Fahrenheit a Celsius.
Elige 1 o 2: """))

match (opcion):
    case 1:
        ingresaTemperatura = float(input("Ingresa temperatura en Celsius: "))
        celsiusFahre = ((ingresaTemperatura * 9/5) + 32)
        print (f"De {ingresaTemperatura} Celsius es igual a {celsiusFahre:.0f} grados Fahrenheit.")
    case 2:
        ingresaTemperatura = float(input("Ingresa temperatura en Fahrenheit: "))
        FahrenheitCelsi = round((ingresaTemperatura - 32) * 5/9)
        print (f"De {ingresaTemperatura} Fahrenheit a {FahrenheitCelsi:.0f} grados Celsius.")