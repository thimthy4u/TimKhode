class Car{
   constructor(power){
    this._gas = 10;
    this._power = power;
  }

  get power(){
    return `${this._power} Hp`;
  }
  get gas(){
  return `${this._gas} L (${this._gas / 50 * 100}%)`;
  }
  set gas(value){
    this._gas = value;
  }
}

let car = new Car(300);
car.gas = 50;

console.log(car.power);
console.log(car.gas);
