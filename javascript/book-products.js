import producto from './products.js'

console.log('tamaño de productos:')
console.log('# de productos: ', producto.length);

// buscar un producto por marca:
const appleProduct = producto.filter(
    p => p._id == 3
)

//console.log(appleProduct)

const A = [0,1,2,3,4,5,6]

const values = ['lunes','martes','miercoles','jueves','viernes','sabado','domingo']

const newArray = A.map(value => values[value])

//console.log(newArray)

const dias = ["Lunes", "Martes", "Miércoles"];
const resultado = dias.join(" - ");
console.log(resultado); // "Lunes - Martes - Miércoles"



