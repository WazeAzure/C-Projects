import Hewan from './lol.js';

class Anjing extends Hewan {
	constructor(name, age, gender, kaki){
		super(name, age, gender);
		this.kaki = kaki;
	}
	info(){
		return (`Namaku ${this.name} usiaku ${this.age} gender ${this.gender} jumlah kaki ${this.kaki}`);
	}
}
export default {Anjing};
