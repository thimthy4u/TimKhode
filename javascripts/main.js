class Car{

  constructor(model, year, color){
    this.model = model;
    this.year = year;
    this.color = color;
}
}
const car1 = new Car("Mustang", 2025, "red");

ChangeColor(car1, "Gold");
displayInfo(car1);

function displayInfo(car){
  console.log(car.model);
  console.log(car.year);
  console.log(car.color);
}

function ChangeColor(car, color){
  car.color = color;
}
