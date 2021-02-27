#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream infile;
  ofstream outfile;
  
  infile.open("input-xray-4764.txt");
  outfile.open("result.txt");
  
  int T;
  
  infile >> T;
  int finalResult[T];
  for(int t = 0; t < T ; t++){
    int n;
    infile >> n;
    int arr[n],max = 0, total;

    for(int i=0;i<n;i++){
      infile >> arr[i];
      total += arr[i];
      if(arr[i] > max){
        max = arr[i];
      }
    }
    int ans[max][n];
    for(int j=0;j<n;j++){
      for(int k=0;k<arr[j];k++){
        ans[k][j] = 1;
      }
      for(int l=arr[j];l<max;l++){
        ans[l][j] = 0;
      }
    }
  
    int penanda = 0, akhir=0, xkali=0;
    for(int i=0;i<max;i++){
      xkali = 0;
      for(int j=0;j<n-1;j++){
        if(ans[i][j] == 1 && ans[i][j] == ans[i][j+1]){
          penanda = 1;
        } else if(ans[i][j] == 0 && ans[i][j+1] == 1){
          penanda = 1;
        } else if(ans[i][j] == 1 && ans[i][j+1] == 0){
          xkali++;
          penanda = 0;
        }else {
          penanda = 0;
        }
      }
      if(penanda == 1){
        akhir++;
      }
      akhir += xkali;
    }
    finalResult[t] = akhir;  
    }
  
   for(int lol=0;lol<T;lol++){
     outfile << "Case #" << lol+1 << ": " << finalResult[lol] << endl;
   }
   return 0;
}
