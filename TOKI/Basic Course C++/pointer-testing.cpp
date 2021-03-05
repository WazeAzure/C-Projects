#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int n;
	cin >> n;

	int *p = (int *)calloc(n, sizeof(int));
	for(int i=0;i<n;i++){
		cin >> *(p+i);
		cout << *(p+i);
	}
	return 0;
}
