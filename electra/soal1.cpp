#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int fact(int n){
	if (n == 0 || n == 1){
		return 1;
	} else {
		return n * fact(n - 1);
	}
}

void segitigap(int baris){
	int total;
	for(int n=0;n < baris;n++){
		total = 0;
		for(int r=0;r<baris-n+1;r++){
			cout << "  ";
		}
		for(int r=0;r<=n;r++){
			cout << fact(n)/(fact(n-r)*fact(r))<<"   ";
			total += fact(n)/(fact(n-r)*fact(r));
		}
		cout <<endl;
	}
	cout << total;
}
int main(){
	int baris;
	cin >> baris;
	segitigap(baris);
	return 0;
}
