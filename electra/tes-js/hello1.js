class Hewan {
	constructor(name){
		this.name = name;
	}
	hello(word){
		if(word == undefined){
			word = "lovely";
		}
		return (`Hello ${this.name} ${word}`);
	}
}
export default Hewan;
