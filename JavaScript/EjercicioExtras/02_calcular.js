/*
1. Calcular el valor de a, si a=(b+3)/2.
2. Calcular el promedio de los valores numéricos de a, b y c.
3. Calcular el valor de la velocidad v dados la distancia d y el tiempo t.
4. Calcular el área del rectángulo dados los valores de la base b y la altura h.
*/


let opcion = parseInt(prompt("1. Calcular si a=(b+3)/2.\n2. Calcular el promedio.\n3. Calcular velocidad - distancia y tiempo.\n4. Calcular área del rectángulo"))

switch (opcion) {
    case 1:
        document.write("Elegiste calcular si a=(b+3)/2.<br>")
        let ingresaValorB = parseFloat(prompt("Ingresa el valor de B: "))
        respuesta = ((ingresaValorB + 3) / 2)   
        document.write(`El valor de "a" es: ${respuesta}`)
        break;
    
    case 2:
        document.write("Elegiste calcular promedio.<br>")
        let ingresarCaltidadDecalificaciones = parseInt(prompt("Ingresa cuantas calificaciones vas ingresar: "))
        promedio = 0
        for (let i = 1; i <= ingresarCaltidadDecalificaciones; i++) {
            let notas = parseFloat(prompt(`Calificación ${i}: `))
            document.write(`Calificación ${i}: ${notas}<br>`)
            promedio += notas / ingresarCaltidadDecalificaciones
        }
        document.write(`El promedio es: ${promedio}<br>`)
        if (promedio < 6) {
            document.write("Tú calificación es C.")
        }
        else if (promedio < 14) {
            document.write("Tú calificación es B.")
        }
        else{
            document.write("Tú calificación es .")
        }
        break;

    case 3:
        document.write("Elegiste distancia d y el tiempo t.<br>")
        let ingresaDistancia = parseFloat(prompt("Ingresa la distancia del viaje: "))
        let ingresaTiempo = parseFloat(prompt("Ingresa la distancia del viaje: "))
        velocidad = ingresaDistancia * ingresaTiempo
        document.write(`Velocidad ${velocidad} km/hr`)
        break;

    case 4:
        document.write("Elegiste área del rectángulo.<br>")
        let ingresaBase = parseFloat(prompt("Ingresa la distancia del viaje: "))
        let ingresaAltura = parseFloat(prompt("Ingresa la distancia del viaje: "))
        area = ingresaBase * ingresaAltura
        document.write(`El area de un rectangulo es ${area}`)
        
        break;

    default:
        document.write("ERROR - Debes elegir entre 1 - 4.")
        break;
}



