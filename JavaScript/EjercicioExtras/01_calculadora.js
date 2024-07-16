let calculadora =  parseInt(prompt("1. suma\n2. resta\n3. multiplicacion\n4. division"))


let ingresePrimerNumero = parseFloat(prompt("Ingrese primer número: "))
let ingreseSegundoNumero = parseFloat(prompt("Ingrese segundo número: "))
let resultado = 0

switch (calculadora) {
    case 1:
        resultado = ingresePrimerNumero + ingreseSegundoNumero
        document.write(`El resultado es ${resultado}`)
        break;

    case 2:
        resultado = ingresePrimerNumero - ingreseSegundoNumero
        document.write(`El resultado es ${resultado}`)
        break;

    case 3:
        resultado = ingresePrimerNumero * ingreseSegundoNumero
        document.write(`El resultado es ${resultado}`)
        break;

    case 4:
        if (ingreseSegundoNumero == 0) {
            document.write("ERRO - no se puede dividir entre CERO.")
        }
        else{
            resultado = ingresePrimerNumero / ingreseSegundoNumero
            document.write(`El resultado es ${resultado}`)
        }

        break;

    default:
        document.write(`Debes elegir entre las 1 - 4`)
        break;
}