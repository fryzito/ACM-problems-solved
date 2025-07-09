const fs = require('node:fs');

const data = fs.readFileSync('./hello.txt','utf8');

console.log(data)

function showMessage(){
    console.log('Finished')
}

showMessage();
