// Variável global
let x = 10;

function f() {
  // f() também enxerga o x do escopo onde foi definida (global)
  console.log(x);
}

function g() {
  let x = 20; // local a g()
  f();
}

console.log("Executando em JavaScript:");
g();
// Saída esperada:
// Executando em JavaScript:
// 10
