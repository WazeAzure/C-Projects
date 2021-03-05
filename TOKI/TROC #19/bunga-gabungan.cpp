#include <iostream>

using namespace std;

int main(){
	int *p = new int;
	int *q = new int;
	cin >> *p >> *q;

	if(((*p)*(*p) + (*q)*(*q) + 1)%4 != 0){
	int p,q;
		cout << -1;
	} else {
		cout << (((*p)*(*p) + (*q)*(*q) + 1))/4;
	}
	delete p, q;
	return 0;
}
