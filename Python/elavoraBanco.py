"""
Simular el menú de opciones de un cajero de banco, donde se pida la opción a realizar:
1 Depositar
2 Retirar
3 Consultar
4 Salir
En las opciones 1 y 2 debe pedir el monto para depositar o retirar, valide si es un monto mayor a cero. En la opción 3 y debe mostrar un mensaje de Consulta se imprimió en Recibo impreso y en la opción 4 debe indicar que se finalizaron las operaciones.
"""
opcion = int(input("""1. Depositar
2. Retirar
3. Consultar
4. Salir
Elegir del 1 - 4: """))


if opcion == 1:
    print ("Vas a depositar")
    depositar = float(input("Cuanto vas a depositar: "))
    print (f"Tu deposito fue de {depositar}")

elif opcion == 2:
    print ("Vas a retirar")
    print(f"Tu saldo es de ")

elif opcion == 3:
    print("")
    
else:
    print ("Vas a concultar")

