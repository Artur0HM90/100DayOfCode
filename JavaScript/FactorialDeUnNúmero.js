let ingresaNumero = parseInt(prompt("Ingresa el factorial que deseas saber: "))
let factorial = 1

for (let index = 1; index <= ingresaNumero; index++) {
    factorial *= index
    console.log(`El factorial de ${ingresaNumero} es: ${factorial}`)
}