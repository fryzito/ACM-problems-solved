import products from './products.js'

console.log('tamaño de productos:')
console.log('# de productos: ', products.length);

// buscar un producto por marca:
const appleProduct = products.filter(
    p => p._id == 3
)

console.log(appleProduct)

