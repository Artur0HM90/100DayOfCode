let primerNumero = parseFloat(prompt("Ingresa el primer número: "))
let segundoNumero = parseFloat(prompt("Ingresa el segundo número: "))
let tercerNumero = parseFloat(prompt("Ingresa el tercer número: "))

if ((primerNumero > segundoNumero) && (primerNumero > segundoNumero)) {
    document.write(`El primer número es el mayor ${primerNumero}`)    

}else if ((segundoNumero > primerNumero) && (segundoNumero > tercerNumero)) {
    document.write(`El segundo número es el mayor ${segundoNumero}`)
} 
else{ 
    document.write(`El tercer número es el mayor ${tercerNumero}`)
}