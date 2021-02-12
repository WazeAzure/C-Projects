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
			if(i%5 == 0){
				int *new_size = new int[i+5];
				for(int j=0;j<i;j++){
					*(new_size + j) = *(p + j);
				}
				delete[] p;
				p = new_size;
			}
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
