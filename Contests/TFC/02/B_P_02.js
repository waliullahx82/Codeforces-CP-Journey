'use strict';
const fs = require('fs');
const input = fs.readFileSync(0, 'utf8').trim().split(/\s+/);
let idx = 0;

let t = Number(input[idx++]);

while (t--) {
     let a = Number(input[idx++]);
    let b = Number(input[idx++]); 
    let area = 0.5 * a * b;
    console.log(area.toFixed(9));
}
