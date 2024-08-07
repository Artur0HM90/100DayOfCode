# Descuento camisetas
primerDescuentoCamisetas = 0.05
segundoDescuentoCamisetas = 0.15

# Descuento pantalones
primerDescuentoPantalones = 0.07
segundoDescuentoPantalones = 0.12
tercerDescuentoPantalones = 0.20

# Descuento abrigos
primerDescuentoAbrigos = 0.25

# Descuento abrigos
descuentoEnCamisetasAbrigos = 0.10

cantidadDeCompras = 0
precioDelProducto = 0
totalDeLasCompras = 0
descuento = 0


opcion = int(input("""1. Camisetas
2. Pantaloness
3. Abrigos
Que vas a comprar 1 - 3: """))

match (opcion):
    case 1:
        print("Elegiste comprar camisetas.")
        cantidadDeCompras = int(input("Cuantas camisetas vas comprar: "))
        precioDelProducto = float(input("Ingresa el precio: "))
        totalDeLasCompras = cantidadDeCompras * precioDelProducto

        if totalDeLasCompras <= 20:
            descuento = totalDeLasCompras * primerDescuentoCamisetas
            print (f"Precio de tus compras es: ${totalDeLasCompras:.2f} dolares.")
            print (f"Tienes un descuento del 5% ${descuento:.2f} dolares.")
            print (f"Total a pagar es de: ${totalDeLasCompras - descuento:.2f} dolares.")
        
        elif (totalDeLasCompras > 20) and (totalDeLasCompras <= 50):
            descuento = totalDeLasCompras * descuentoEnCamisetasAbrigos
            print (f"Precio de tus compras es: ${totalDeLasCompras:.2f} dolares.")
            print (f"Tienes un descuento del 10% ${descuento:.2f} dolares.")
            print (f"Total a pagar es de: ${totalDeLasCompras - descuento:.2f} dolares.")

        elif (totalDeLasCompras > 50):
            descuento = totalDeLasCompras * segundoDescuentoCamisetas
            print (f"Precio de tus compras es: ${totalDeLasCompras:.2f} dolares.")
            print (f"Tienes un descuento del 15% ${descuento:.2f} dolares.")
            print (f"Total a pagar es de: ${totalDeLasCompras - descuento:.2f} dolares.")

    case 2:
        print("Elegiste comprar pantalones.")
        cantidadDeCompras = int(input("Cuantos pantalones vas comprar: "))
        precioDelProducto = float(input("Ingresa el precio: "))
        totalDeLasCompras = cantidadDeCompras * precioDelProducto

        if totalDeLasCompras <= 30:
            descuento = totalDeLasCompras * primerDescuentoPantalones
            print (f"Precio de tus compras es: ${totalDeLasCompras:.2f} dolares.")
            print (f"Tienes un descuento del 7% ${descuento:.2f} dolares.")
            print (f"Total a pagar es de: ${totalDeLasCompras - descuento:.2f} dolares.")
        
        elif (totalDeLasCompras > 30) and (totalDeLasCompras <= 60):
            descuento = totalDeLasCompras * segundoDescuentoPantalones
            print (f"Precio de tus compras es: ${totalDeLasCompras:.2f} dolares.")
            print (f"Tienes un descuento del 12% ${descuento:.2f} dolares.")
            print (f"Total a pagar es de: ${totalDeLasCompras - descuento:.2f} dolares.")

        elif (totalDeLasCompras > 60):
            descuento = totalDeLasCompras * tercerDescuentoPantalones
            print (f"Precio de tus compras es: ${totalDeLasCompras:.2f} dolares.")
            print (f"Tienes un descuento del 20% ${descuento:.2f} dolares.")
            print (f"Total a pagar es de: ${totalDeLasCompras - descuento:.2f} dolares.")

    case 3:
        print("Elegiste comprar abrigos.")
        cantidadDeCompras = int(input("Cuantos abrigos vas comprar: "))
        precioDelProducto = float(input("Ingresa el precio: "))
        totalDeLasCompras = cantidadDeCompras * precioDelProducto

        if totalDeLasCompras <= 100:
            descuento = totalDeLasCompras * descuentoEnCamisetasAbrigos
            print (f"Precio de tus compras es: ${totalDeLasCompras:.2f} dolares.")
            print (f"Tienes un descuento del 10% ${descuento:.2f} dolares.")
            print (f"Total a pagar es de: ${totalDeLasCompras - descuento:.2f} dolares.")
        
        elif (totalDeLasCompras > 100):
            descuento = totalDeLasCompras * primerDescuentoAbrigos
            print (f"Precio de tus compras es: ${totalDeLasCompras:.2f} dolares.")
            print (f"Tienes un descuento del 25% ${descuento:.2f} dolares.")
            print (f"Total a pagar es de: ${totalDeLasCompras - descuento:.2f} dolares.")
