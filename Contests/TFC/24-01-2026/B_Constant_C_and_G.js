'use strict';
const fs = require('fs');
const input = fs.readFileSync(0, 'utf8').trim().split(/\s+/);
let idx = 0;

let t = Number(input[idx++]);

while (t--) {
     let len = Number(input[idx++]);
     let h = Number(input[idx++]);
     let min = Number(input[idx++]); 
     let s = Number(input[idx++]); 

    let timeRatio = (h*min*s)/(24*60*60);

    console.log(300000000*timeRatio/len,9.8*(timeRatio*timeRatio)/len);

}