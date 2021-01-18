#include <stdio.h>
#include <stdlib.h>

void selectSort();

int main(){

	selectSort();
	//fileLoL();

	return 0;
}


void selectSort(){
	int x;
	scanf("%d", &x);
	
	int arr[x];
	int* ptr = (int*)malloc(x * sizeof(int));
	int max, index;

	//input
	for(int l=0;l<x;l++){
		scanf("%d", &arr[l]);
	}
	//pengolahan
	for(int i=0;i<x;i++){
		max = 10000000;
		for(int j=0;j<x;j++){
			if(arr[j] < max){
				max = arr[j];
				index = j;
			}
		}
		arr[index] = 1000;
		*(ptr + i) = max;
	}
	//output
	printf("----- Ini Yang Sudah di Selection Sort ----\n");
	for(int k=0;k<x;k++){
		arr[k] = *(ptr + k);
		printf("%d ", arr[k]);
	}
	free(ptr);
}
