import Hewan from "./hello1.js"

class Anjing extends Hewan {
	constructor(name, age){
		super(name);
		this.age = age;
	}
	bark(){
		return `Total age and life would be ${this.age*2}`;
	}
}

export default Anjing;
