let ingresaNumeroPares = parseInt(prompt("Ingesa número: "))
let suma = 0

for (let index = 1; index <= ingresaNumeroPares; index++) {
    
    if (index % 2 == 0) {
        suma += index
        document.write(suma + "<br>")
    }
    
}