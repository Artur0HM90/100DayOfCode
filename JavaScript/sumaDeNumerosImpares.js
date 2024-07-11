let ingresaNumero = parseInt(prompt("Ingresa hasta donde quieres que se sume: "))
let suma = 0

for (let i = 1; i < ingresaNumero; i++) {
    if (i % 2 != 0) {
        suma += i
        document.write(suma, "<br>")
    }
}