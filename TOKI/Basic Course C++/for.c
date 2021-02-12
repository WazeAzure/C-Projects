#include <stdio.h>

int main(){
	int n;
	int arr[n];
	int total = 0;

	scanf("%d", &n);

	for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);
		total += arr[i];
	}

	printf("%d", total);
	return 0;
}
