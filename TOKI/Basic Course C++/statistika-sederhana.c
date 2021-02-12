#include <stdio.h>

int main(){
	int n, max = -100000, min = 100000;
	
	scanf("%d", &n);

	int arr[n];

	for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);

		if(arr[i] >= max){
			max = arr[i];
		}
		if(arr[i] <= min){
			min = arr[i];
		}
	}

	printf("%d %d", max, min);
	
	return 0;
}
