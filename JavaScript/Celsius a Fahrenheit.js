let gradosCelsius, gradosFahrenheit, resultado
ingresaUnaCifra = prompt("1: Grados Celsius a Grados Fahrenheit\n2: Grados Fahrenheit a Grados Celsius\n Ingresa 1 - 2: ")

if (ingresaUnaCifra == 1) {
    gradosCelsius = prompt("Ingresa Grados Celsius: ")
    resultado = (gradosCelsius * 9/5 ) + 32 
    console.log(`Resultado: ${resultado}` )
} else if (ingresaUnaCifra == 2) {
    gradosFahrenheit = prompt("Ingresa Grados Fahrenheit: ")
    resultado = (gradosFahrenheit - 32) * 5/9
    console.log (`Resultado: ${resultado}`)
} else {
    console.log("ERROR - Debes elegie entre las dos opciones 1 - 2.")
}