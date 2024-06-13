let btnSovle = document.getElementById("btnSovle");
btnSovle.onclick = () => {
  let a1 = parseFloat(document.getElementById("a1").value);
  let b1 = parseFloat(document.getElementById("b1").value);
  let c1 = parseFloat(document.getElementById("c1").value);

  let a2 = parseFloat(document.getElementById("a2").value);
  let b2 = parseFloat(document.getElementById("b2").value);
  let c2 = parseFloat(document.getElementById("c2").value);

  let a3 = parseFloat(document.getElementById("a3").value);
  let b3 = parseFloat(document.getElementById("b3").value);
  let c3 = parseFloat(document.getElementById("c3").value);

  let d1 = parseFloat(document.getElementById("d1").value);
  let d2 = parseFloat(document.getElementById("d2").value);
  let d3 = parseFloat(document.getElementById("d3").value);
  let results = document.getElementById("results");
  let results1 = document.getElementById("results1");
  let results2 = document.getElementById("results2");

  // results.innerText = `${a1} , ${b1}, ${c1}`;
  // results1.innerText = `${a1} , ${b1}, ${c1}`;
  // results2.innerText = `${a1} , ${b1}, ${c1}`;
  console.log(a1 + a2);
  console.log(a1 + a2);

  let detA =
    a1 * (b2 * c3 - c2 * b3) -
    b1 * (a2 * c3 - c2 * a3) +
    c1 * (a2 * b3 - b2 * a3);

  let detX =
    d1 * (b2 * c3 - c2 * c3) -
    b1 * (d2 * c3 - c2 * d3) +
    c1 * (d2 * b3 - b2 * d3);
  results.innerText = `D = ${detA}`;
  results1.innerText = `Dx = ${detX}`;
};
