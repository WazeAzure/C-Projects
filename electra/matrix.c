#include <stdio.h>
#include <stdlib.h>

int main(){
	int pivotA = 0, pivotB = 0;
	int arr[10][10];
	int n, tempN, i, j, p;
	scanf("%d", &n);
	tempN = n;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d", & arr[i][j]);
		}
	}

	for(i = 0;i < n; i++){
		pivotA += arr[i][i];
		pivotB += arr[i][tempN-1];
		tempN--;
	}
	printf("%d", abs(pivotA - pivotB));

	return 0;
}
