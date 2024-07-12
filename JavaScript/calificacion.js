let cuantasNotasVasIngresar = parseInt (prompt("Cuantas notas vas ingresar: "))
let notas
let promedio = 0

for (let index = 1; index <= cuantasNotasVasIngresar; index++) {
    notas = parseFloat(prompt(`Calificación ${index}`))
    document.write(`Calificaión ${index}: ${notas}  <br> `)
    promedio += notas / cuantasNotasVasIngresar
}   
document.write(promedio, "<br>") 

if (promedio < 3) {
    document.write("Tu calificación es F.")
}

else if (promedio < 8) {
    document.write("Tu calificación es: D.")
}

else if (promedio < 11) {
    document.write("Tu calificación es: C.")
}

else if (promedio < 15) {
    document.write("Tu calificación es: B.")
}

else {
    document.write("Tu calificación es: A.")
}