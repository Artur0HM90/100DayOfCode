let ingresaCantidadDenotas = parseInt(prompt("Ingresa cuantas notas vas ingresar: "))
let promedio = 0
let notas

for (let index = 1; index <= ingresaCantidadDenotas; index++) {
    let notas = parseFloat(prompt(`Calificación ${index}: `))
    promedio += notas / ingresaCantidadDenotas
}
document.write(`Tu calificación final es: ${promedio}`)