const fis = require('fs');
const input = fis
  .readFileSync("./input-antennas-ab59.txt", "utf-8")
  .split("\n")
  .filter((txt) => txt !== "")
  .map((data) => {
    if (data.split(" ").length > 1) return data.split(" ").map(Number);
    return [Number(data)];
  });




const antennasAndBuildings = (n, k, antennas, buildings) => {
    const minScore = [];
    const maxScore = [];
    const reducer = (accumulator, currentValue) => accumulator + currentValue;
    const antennaPlace = k;
    console.log()
    const sortAntennas = antennas.sort();
    const sortBuildings = buildings.sort();
    for (let i = 0; i < antennaPlace; i++) {
      let multiple = sortAntennas[i] * sortBuildings[i];
      minScore.push(multiple);
    }
 
    const sortAntennas2 = antennas.sort().reverse();
    const sortBuildings2 = buildings.sort().reverse();
    for (let i = 0; i < antennaPlace; i++) {
      let multiple = sortAntennas2[i] * sortBuildings2[i];
      maxScore.push(multiple);
    }
    console.log(minScore.reduce(reducer));
    console.log(maxScore.reduce(reducer));
  };

  for(let i=0;i<input[0];i++){
    antennasAndBuildings(input[1+(i*3)][0],input[1+(i*3)][1],input[2+(i*3)],input[3+(i*3)])
}