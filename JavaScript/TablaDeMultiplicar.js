let ingresaTabla = prompt("Ingresa que tabla de multiplicar:")

let ingresaLimite = prompt("Ingresa hasta donde quieres que multiplique 1 - ?: ")

for (let index = 1; index <= ingresaLimite; index++) {
    console.log(`${ingresaTabla} x ${index} = ${ingresaTabla * index}`)
    
}