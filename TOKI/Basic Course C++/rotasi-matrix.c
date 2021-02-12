#include <stdio.h>
#include <stdlib.h>

int main(){
	int row, col;
	
	scanf("%d %d", &row, &col);
	
	int *p = (int*)calloc(row * col, sizeof(int));

	for(int i=0;i<row*col;i++){
		scanf("%d", (p + i));
	}

	for(int k=0;k<col;k++){
		for(int j=row-1;j>=0;j--){
			printf("%d ", *(p + j*col + k));
		}
		printf("\n");
	}

	free(p);

	return 0;
}
