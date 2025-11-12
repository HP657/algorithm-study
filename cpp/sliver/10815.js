const fs = require("fs")
const [n,N,m,M] = fs.readFileSync(process.platform == "linux" ? "/dev/stdin" : "input.txt").toString().trim().split("\n").map((item) => item.replace("\r",""))

let Narr = N.split(" ").map(Number);
let Marr = M.split(" ").map(Number);

console.log(m);
let result = [];
for(let i = 0;i < Number(m) ; i++){
    if(Narr.includes(Marr[i])){
        result.push(1);
    }else{
        result.push(0);
    }
}

console.log(result.join(" "));