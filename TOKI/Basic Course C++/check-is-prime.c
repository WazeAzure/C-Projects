#include <stdio.h>
#include <math.h>
#include <stdio.h>

int isprime(int x);

int main(){
	int n;
	scanf("%d", &n);

	int arr[n];

	for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);
		if(isprime(arr[i]) == 1){
			printf("YA\n");
		} else {
			printf("BUKAN\n");
		}
	}

	return 0;
}

int isprime(int x){
	for(int i=2;i<=sqrt(x);i++){
		if(x%i == 0){
			return 0;
		}
	}
	return 1;
}
