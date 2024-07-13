let ingreseNumeroSecreto = parseFloat(prompt("Ingrese número secreto: "))
let ingreseNumero = parseFloat(prompt("Ingresa número: "))

while (ingreseNumero != ingreseNumeroSecreto) {
    document.write(`INCORRECTO - Intentalo otra vez: ${ingreseNumero} <br>`)
    ingreseNumero = parseFloat(prompt("Ingrese número: "))
}

document.write(`¡CORRECTO - El número secreto era ${ingreseNumero}`)