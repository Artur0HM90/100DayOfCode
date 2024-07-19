function encontarPotencia(numero1, potencia) {
    return Math.pow(numero1, potencia)
}

let ingresaNumero = parseFloat(prompt("Ingresa un número: "))
let ingresaPotencia = parseInt(prompt("Ingresa una potencia: "))
let resultado = 0

resultado = encontarPotencia(ingresaNumero, ingresaPotencia)
document.write(`El resultado es ${resultado}`)
