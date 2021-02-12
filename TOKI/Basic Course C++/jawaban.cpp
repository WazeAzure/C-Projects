#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int *p = new int[5];
	*(p) = 0;

	int i = 0;
	char exit = 'n';

	do {
		if(scanf("%d", &p[i]) != EOF){
			i++;
		} else {
			break;
		}
	} while(true);

	for(int j=i-1;j>=0;j--){
		cout << *(p + j) << "\n";
	}

	delete[] p;
	return 0;
}
