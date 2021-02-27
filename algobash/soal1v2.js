function solution(mat,from,to){
let row = [-1, 0, 0, 1]
let col = [0, -1, 1, 0]

function isValid(mat, visited, row, col, x, y){

  return mat[row][col] != mat[x][y]
}

  let visited = []

  for(let i = 0; i< mat.length; i++){
    let temp = []
    for(let j=0;j<mat[0].length;j++){
      temp.push(0)
      if(mat[i][j] == 'R'){
        mat[i][j] = 1
      } else {
        mat[i][j] = 0
      }
    }
    visited.push(temp)
  }

  let q = []
  let i = from[0]; j = from[1]; x2 = to[0]; y2 = to[1]
  visited[i][j] = 1

  min_dist = 0

  q.push({x:i,y:j,dist:0})

  while(q.length != 0){
    let x = q.shift()
    i = x.x; j = x.y

    if(i == x2 && j == y2){
      min_dist = x.dist
      break
    }

    for(let k = 0; k < 4;k++){
      if(i+row[k] == -1 || j+col[k] == -1 || i+row[k] == mat.length || j+col[k] == mat[0].length){
        continue
      }
      if (isValid(mat, visited, i + row[k], j + col[k], i, j)){
        visited[i + row[k]][j + col[k]] = 1;
        q.push({x: i + row[k],y: j + col[k],dist: x.dist + 1 })
      }
    }
  }
  console.log(min_dist+1)
}

solution([
["L", "R"],["L", "L"]
],[0,0],[1,1])