let cuantasNotasVasIngresar = parseInt (prompt("Cuantas notas vas ingresar: "))
let notas
let promedio = 0

for (let index = 1; index <= cuantasNotasVasIngresar; index++) {
    notas = parseFloat(prompt(`Calificación ${index}`))
    document.write(`Calificaión ${index}: ${notas}  <br> `)
    promedio += notas / cuantasNotasVasIngresar
}   
document.write(promedio)

if (promedio < 3) {
    cout << "Tu calificación es F.";
}

else if (promedio < 8) {
    cout << "Tu calificación es: D";
}

else if (promedio < 11) {
    cout << "Tu calificación es: C";
}

else if (promedio < 15) {
    cout << "Tu calificación es: B";
}

else {
    cout << "Tu calificación es: A";
}