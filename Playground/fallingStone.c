#include <stdio.h>

int main(){
	int x, y;
	int sumZ = 0;
	scanf("%d %d", &x, &y);
	
	int arr[x][y];

	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			scanf("%d", &arr[i][j]);
		}
	}

	for(int j=0;j<y;j++){
		for(int i=0;i<x;i++){
			if(arr[i][j] == 0){
				sumZ++;
			}
		}
		for(int i=x-1;i>=0;i--){
			if(sumZ != 0){
				arr[i][j] = 0;
				sumZ--;
			} else {
				arr[i][j] = 1;
			}
		}
	}

	for(int k=0;k<x;k++){
		for(int l=0;l<y;l++){
			printf("%d ", arr[k][l]);
		}
		printf("\n");
	}

	printf("sumZ adlaah %d", sumZ);
	return 0;
}
