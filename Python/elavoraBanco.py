"""
Simular el menú de opciones de un cajero de banco, donde se pida la opción a realizar:
1 Depositar
2 Retirar
3 Consultar
4 Salir
En las opciones 1 y 2 debe pedir el monto para depositar o retirar, valide si es un monto mayor a cero. En la opción 3 y debe mostrar un mensaje de Consulta se imprimió en Recibo impreso y en la opción 4 debe indicar que se finalizaron las operaciones.
"""
def mostrar_menu():
    print("Bienvenido al cajero automático")
    print("Seleccione una opción:")
    print("1. Depositar")
    print("2. Retirar")
    print("3. Consultar")
    print("4. Salir")

def realizar_deposito(saldo):
    monto = float(input("Ingrese el monto a depositar: "))
    if monto > 0:
        saldo += monto
        print(f"Has depositado ${monto:.2f}. Tu nuevo saldo es ${saldo:.2f}.")
    else:
        print("El monto debe ser mayor a cero.")
    return saldo

def realizar_retiro(saldo):
    monto = float(input("Ingrese el monto a retirar: "))
    if monto > 0:
        if monto <= saldo:
            saldo -= monto
            print(f"Has retirado ${monto:.2f}. Tu nuevo saldo es ${saldo:.2f}.")
        else:
            print("Saldo insuficiente.")
    else:
        print("El monto debe ser mayor a cero.")
    return saldo

def consultar_saldo():
    print("Consulta se imprimió en Recibo impreso.")

def cajero_automatico():
    saldo = 0.0
    while True:
        mostrar_menu()
        opcion = input("Ingrese su opción: ")

        if opcion == '1':
            saldo = realizar_deposito(saldo)
        elif opcion == '2':
            saldo = realizar_retiro(saldo)
        elif opcion == '3':
            consultar_saldo()
        elif opcion == '4':
            print("Se finalizaron las operaciones. Gracias por usar el cajero automático.")
            break
        else:
            print("Opción no válida. Por favor, intente nuevamente.")

# Ejecutar el cajero automático
cajero_automatico()
