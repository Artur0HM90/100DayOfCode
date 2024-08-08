# Descuentos 
descuentoPremium = 0.10     # si es mayor o igual a 100
descuentoVip = 0.20         # si es mayor o igual a 200

# Envios
envioNacional = 10          # si el monto de compra es menor a 150
envioInternacional = 25     # si eñ monto de compra es menor a 300

montoDeLaCompra = 0
nomtoConDescuento = 0

nombreDelCliente = input("Ingresa nombres del cliente: ")
# print((nombreDelCliente).title())

tipoDeCliente = int(input("""1. Cliente regular.
2. Cliente premium.
3. Cliente VIP.
Elige 1 - 3: """))
print("-----------------")

match (tipoDeCliente):
    case 1:
        print("Es un cliente regular.")

        print("La compra fue")
        print("1. Nacinal.")
        print("2. Internacional.")
        compraNaciInter = int(input("Elige 1 - 2: "))
        print("-----------------")
        match (compraNaciInter):
            case 1:
                montoDeLaCompra = float(input("Ingresa el monto de la compra: "))
                print("------------RECIBO------------")
                print("-----Compra nacional----------")
                print(nombreDelCliente.title())
                print(f"Total a pagar es de: ${montoDeLaCompra:.2f} dolares")
            case 2:
                montoDeLaCompra = float(input("Ingresa el monto de la compra: "))
                print("------------RECIBO------------")
                print("-----Compra internacional-----")
                print(nombreDelCliente.title())
                print(f"Total a pagar es de: ${montoDeLaCompra:.2f} dolares")
    
    case 2:
        print("Es un cliente premium")

        print("La compra fue")
        print("1. Nacinal.")
        print("2. Internacional.")
        compraNaciInter = int(input("Elige 1 - 2: "))
        print("-----------------")
        match (compraNaciInter):
            case 1:
                montoDeLaCompra = float(input("Ingresa el monto de la compra: "))
                if (montoDeLaCompra >= 150):
                    print("------------RECIBO------------")
                    print("-----Compra nacional----------")
                    print(nombreDelCliente.title())
                    nomtoConDescuento = montoDeLaCompra * descuentoPremium
                    print(f"Precio del producto es ${montoDeLaCompra:.2f} dolares.")
                    print(f"Descuento del 10% que es ${nomtoConDescuento:.2f} dolares.")
                    print(f"Total a pagar es de ${montoDeLaCompra - nomtoConDescuento:.2f} dolares")
                
                elif montoDeLaCompra < 150:
                    print("------------RECIBO------------")
                    print("-----Compra internacional-----")
                    print(nombreDelCliente.title())
                    nomtoConDescuento = montoDeLaCompra * descuentoVip
                    print(f"Precio del producto es ${montoDeLaCompra:.2f} dolares.")
                    print(f"Descuento del 10% que es ${nomtoConDescuento:.2f} dolares.")
                    print(f"Total a pagar es de ${montoDeLaCompra - nomtoConDescuento:.2f} dolares")




            case 2:
                montoDeLaCompra = float(input("Ingresa el monto de la compra: "))
                print("------------RECIBO------------")
                print("-----Compra internacional-----")
                print(nombreDelCliente.title())
                print(f"Total a pagar es de: ${montoDeLaCompra:.2f} dolares")

    case 3:
        print("Es un cliente VIP")

