var N = prompt();

var a = prompt();
var b = prompt();
var c = prompt();

var flag = true;

for(let i = 0 ; i < N ; i++){
    if(a[i] != b[i] && b[i] != c[i]){
        flag = false;
        break;
    }
}

console.log(flag ? "YES" : "NO");

