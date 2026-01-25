'use strict';
const fs = require('fs');
const input = fs.readFileSync(0, 'utf8').trim().split(/\s+/);
let idx = 0;

let t = Number(input[idx++]);
let root  = Math.sqrt(t);
console.log(root);