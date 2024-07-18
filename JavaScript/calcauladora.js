function suma(num1, num2) {
    return num1 + num2
}

function resta(num1, num2) {
    return num1 - num2
}

function multiplicacion(num1, num2) {
    return num1 * num2
}

function division(num1, num2) {
    return num1 / num2
}

let opciones =  parseInt(prompt("1. suma\n2. resta\n3. multiplicacion\n4. division"))
let resultado = 0


let ingresePrimerNumero = parseFloat(prompt("Ingrese el primer número: "))
let ingreseSegundoNumero = parseFloat(prompt("Ingrese el segundo número: "))

switch (opciones) {
    case 1:
        document.write("ELEGISTE LA SUMA. <br>")
        resultado = suma(ingresePrimerNumero, ingreseSegundoNumero)
        document.write(`El resultado es: ${resultado}`)
        break;
    
    case 2:
        document.write("ELEGISTE LA RESTA. <br>")
        resultado = resta(ingresePrimerNumero, ingreseSegundoNumero)
        document.write(`El resultado es: ${resultado}`)
        break;

    case 3:
        document.write("ELEGISTE LA MULTIPLICACION. <br>")
        resultado = multiplicacion(ingresePrimerNumero, ingreseSegundoNumero)
        document.write(`El resultado es: ${resultado}`)
        break;

    case 4:
        document.write("ELEGISTE LA DIVISIÓN. <br>")
        if (ingreseSegundoNumero == 0) {
            document.write("No se puede dividir entre CERO")
        }
        else{
            resultado = division(ingresePrimerNumero, ingreseSegundoNumero)
            document.write(`El resultado es: ${resultado}`)
        }
        
        break;

    default:
        document.write("Debes elegir entre 1 - 4")
        break;
}