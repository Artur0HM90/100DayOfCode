let ingresaNumeroHastaQueTabla = parseInt(prompt("Ingresa hasta que tabla deseas multiplicar: "))
let ingresaHastaDondeSeMultiplicara = parseInt(prompt("IngresaIngresa hasta que número vas a multiplicar 1 _ ?: "))

for (let i = 1; i <= ingresaNumeroHastaQueTabla; i++) {
    
    for (let x = 1; x <= ingresaHastaDondeSeMultiplicara; x++) {
        document.write(`${i} x ${x} = ${i*x} <br>`)
    }
    document.write("--------------------- <br>")
}