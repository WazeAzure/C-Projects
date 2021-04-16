#include <iostream>
#include <fstream>



using namespace std;

int gcd (int a, int b){
    if(a == 0){
        return b;
    } else {
        return gcd(b % a, a);
    }
}


int findGCD (int *arr, int n) {
  int result = *(arr);
  for (int i = 1; i < n; i++) {
    result = gcd(*(arr + i), result);
    if (result == 1){
        return 1;
    };
  }
  return result;
};


int main(){
    ifstream infile;
    ofstream outfile;
    infile.open("input-seats-0a51");
    outfile.open("result.txt");
    int n;
    infile >> n;
    for(int i=0; i<n; i++){
        int x;
        infile >> x;
        int arr[x];
        for(int j=0;j<x;j++){
            infile >> arr[j];
        } 
        outfile << "Case #" << i+1 << ": " << findGCD(arr, x);
        
    }
    return 0;
}