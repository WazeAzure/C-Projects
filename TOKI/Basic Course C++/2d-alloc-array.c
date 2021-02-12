#include <stdio.h>
#include <stdlib.h>

int main(){
	int row = 2, col = 2;
	int *p = (int*)calloc(row * col, sizeof(int));

	for(int i=0;i<row*col;i++){
		*(p + i) = i;
	}

	for(int j=0;j<row;j++){
		for(int k=0;k<col;k++){
			printf("%d ", *(p + j*col + k));
		}
		printf("\n");
	}
	return 0;
}
