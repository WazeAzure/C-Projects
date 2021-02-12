#include <iostream>

using namespace std;

int main(){
	int *p = new int[1];
	cin >> *p;
	if((*p == 2 || *p == 3 || *p == 5) && *p < 7){
		printf("YES");
	} else {
		printf("NO");
	}
	delete[] p;
	return 0;
}
