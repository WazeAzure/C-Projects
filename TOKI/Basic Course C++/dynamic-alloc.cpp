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
			cout << "Data ke " << i << ", yakni " << *(p+i) << "\n";
			i++;
		} else {
			break;
		}
	} while(true);

	for(int j=0;j<=i-1;j++){
		cout << *(p + j) << " ";
	}

	delete[] p;
	return 0;
}
