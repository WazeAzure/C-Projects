let row = [-1, 0, 0, 1]
let col = [0, -1, 1, 0]

function isValid(mat, visited, row, col,x,y){
  console.log(row, col)
  console.log(`${visited[0]}\n${visited[1]}\n${visited[2]}`)
  //return((row >= 0) && (row < mat.length) && (col >= 0) && (col < mat[0].length) && ((!mat[row][col] && !visited[row][col])||(mat[row][col] && visited[row][col])));
  //return mat[x][y] != mat[row][col]
  return (row >= 0) && (row < mat.length) && (col >= 0) && (col < mat[0].length)
}

function solution(mat, from, to){
  let visited = []
  
  for(let i=0;i<mat.length;i++){
    let temp = []
    for(let j=0;j<mat[0].length;j++){
      temp.push(0)
    }
    visited.push(temp)
  }

  let que = []
  let min_dist = 0

  let x1 = from[0]
  let y1 = from[1]
  let x2 = to[0]
  let y2 = to[1]

  visited[x1][y1] = 1

  que.push({x:x1,y:y1,dist:0})

  while(que.length != 0){
    console.log(que)
    let x = que.shift()
    
    if(x.x == x2 && x.y == y2){
      min_dist = x.dist
      break;
    }
    for(let k=0;k<4;k++){
      if(x.x+row[k] == -1 || x.y+col[k] == -1){
        continue
      }
      if(isValid(mat,visited, x.x+row[k], x.y+col[k],x.x,x.y)){
         visited[x.x + row[k]][x.y + col[k]] = 1;
         que.push({x:x.x + row[k],y:x.y + col[k],dist:x.dist + 1 });
      }
    }
  }
  console.log("Min "+min_dist)
  console.log(`${visited[0]}\n${visited[1]}\n${visited[2]}`)
  console.log(`${mat[0]}\n${mat[1]}\n${mat[2]}`)
}
solution([
  [1,1,1,0],
  [0,1,0,1],
  [1,0,1,0]
  ],[0,0], [2,3])
