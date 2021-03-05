#include <iostream>

using namespace std;

int main(){
	int x[5910];
	int i, temp;
	x[1] = 1;
	temp = 0;
	for(i = 2; i < 5909; i++){
		x[i] = x[i-1] | i;
	}
	for(i=2; i< 5909; i++){
		if(x[i] != x[i-1]){
			temp++;
		}
	}
	cout << temp;
	return 0;
}
