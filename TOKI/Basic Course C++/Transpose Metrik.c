#include <stdio.h>

int main(){
	int arr[3][3];
	int temp;

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d", &arr[j][i]);
		}
	}
	
	for(int m=0;m<3;m++){
		for(int n=0;n<3;n++){
			printf("%d ", arr[m][n]);
		}
		printf("\n");
	}


	return 0;
}
