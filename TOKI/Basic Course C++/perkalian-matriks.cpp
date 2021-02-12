#include <iostream>

using namespace std;

int main(){
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	
	int arr1[a][b];
	int arr2[b][c];
	int *result = (int*)calloc(a*c, sizeof(int));
	int r1 = a,c1 = b,r2 = b,c2 = c,i,j,k;

	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			cin >> arr1[i][j];
		}
	}
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			cin >> arr2[i][j];
		}
	}

	for(i=0;i<r1;++i){
		for(j=0;j<c2;++j){
			for(k=0;k<c1;++k){
				*(result + i*c1 + k) += arr1[i][k] * arr2[k][j];
			}
		}
	}
	
	for(i=0;i<r1;++i){
		for(j=0;j<c2;++j){
			cout << " " << *(result + i * c + j);
			if(j == c2-1){
				cout << endl;
			}
		}
	}

	return 0;
}

