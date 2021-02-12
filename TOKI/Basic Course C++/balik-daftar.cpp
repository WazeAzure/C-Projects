#include <iostream>
#include <cstdlib>

using namespace std;

void resize(int i);

int *p = new int[10];

int main(){
	int i = 0;

	while(scanf("%d", &angka) != EOF){
		*(p + i) = angka;
		i++;
		if(i % 10 == 0){
			resize(i);
		}
	}
	while(i-1 >= 0){
		cout << *(p + i) < "\n";
		i--;
	}
	delete[] p;
	return 0;
}

void resize(int i){
	int *resize_p = new int[i+10];

	for(int j=0;j<i;j++){
		*(resize_p + j) = *(p + j);
	}

	p = resize_p;
	delete[] resize_p;
}
