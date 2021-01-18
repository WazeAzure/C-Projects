#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);

	for(int i=0;i<n;i++){
		int x = (2*i)+1;
		for(int j=n-1-i;j>0;j--){
			printf(" ");
		}
		for(int i=0;i<x;i++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
