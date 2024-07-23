function millas(ingresarLasMillas) {
    /* Los prompt se deben poner fuera de las funciones */
    let valoKilometro = 1.60934
    return ingresarLasMillas * valoKilometro
}

function Kilometros(ingresarLosKilometros) {
    let valoMillas = 0.621371
    
    return ingresarLosKilometros * valoMillas
}

let opcion = parseInt(prompt("1. Millas a Kilometros\n2. Kilometros a Millas\nElige entre 1 - 2: "))
let millasIngresadas, kilometrosIngresadas
/*let valoKilometro = 1.60934
let valorMilla = 0.621371
*/
let conversion = 0


switch (opcion) {
    case 1:
        document.write("ELEGISTE MILLAS A KILOMETROS <br>")
        let millasIngresadas = parseFloat(prompt("Ingresa tu recorrido en Millas: "))
        conversion = millas(millasIngresadas)
        document.write (`La conversión a kilometros es: ${conversion}`)

        /*
        let millas = parseFloat(prompt("Ingresa tu recorrido en Millas: "))
        conversion = millas * valoKilometro
        document.write(`Millas ${millas} conversión a Kilometros es ${conversion} km`)
        */

        break;
    case 2:
        document.write("ELEGISTE KILOMETROS A MILLAS <br>")
        let kilometrosIngresadas = parseFloat(prompt("Ingresa tu recorrido en Kilometros: "))
        conversion = Kilometros(kilometrosIngresadas)
        document.write(`La conversión a Millas es: ${conversion}`)

        /*
        let Kilometros = parseFloat(prompt("Ingresa tu recorrido en Millas: "))
        conversion = Kilometros * valorMilla
        document.write(`Kilometros ${Kilometros} conversión a Millas es ${conversion} millas`)
        */

        break;

    default:
        document.write("ERROR - Debes ingresa")
        break;
}