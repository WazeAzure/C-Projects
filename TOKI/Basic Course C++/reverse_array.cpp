#include <iostream>
using namespace std;

int main(){
	int array[5], x;
	
	cout << "give 3 inputs..." << endl;
	for (x = 1; x <= 5; x++){
		cin >> array[x];
	}
	
	cout << endl << "original inputs..." << endl;
	for (x = 1; x <= 5; x++){
		cout << array[x] << endl;
	}
	
	cout << endl << "inverse...." << endl;
	for (x = 5; x >= 1; x--){
		cout << array[x] << endl;
	}
	
	return 0;
}
