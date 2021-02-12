#include <stdio.h>
#include <math.h>
#include <stdio.h>

int isAgakPrime(int x);

int main(){
	int n;
	scanf("%d", &n);

	int arr[n];

	for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);
		if(isAgakPrime(arr[i]) < 2){
			printf("YA\n");
		} else {
			printf("BUKAN\n");
		}
	}

	return 0;
}

int isAgakPrime(int x){
	int total = 0;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i == 0){
			total++;
		}
	}
	return total;
}
