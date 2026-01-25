'use strict';
const fs = require('fs');
const input = fs.readFileSync(0, 'utf8').trim().split(/\s+/);
let idx = 0;


     let a = Number(input[idx++]);
    let b = Number(input[idx++]); 
    let c = Number(input[idx++]); 
    console.log((a+b+c));
