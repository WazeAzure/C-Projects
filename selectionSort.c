#include <stdio.h>
#include <stdlib.h>

int main(){
	int arr[5] = {6, 2, 3, 1, 4};
	int iMin = 0;
	int temp;
	for(int i=0;i<3;i++){
		iMin = i;
		for(int j=1;j<5;j++){
			if(arr[j] < arr[iMin]){	
				temp = arr[j];
				arr[j] = arr[iMin];
				arr[iMin] = temp;
			}
		}
	}
	for(int j=0;j<5;j++){
		printf("%d ", arr[j]);
	}
}
