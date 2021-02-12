#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int fungsi(int A, int B, int k, int x);


int main(){
	int A,B,k,x;

	scanf("%d %d %d %d", &A, &B, &k, &x);

	printf("%d", fungsi(A,B,k,x));
	
	return 0;
}

int fungsi(int A, int B, int k, int x){
	if(k == 1){
		return abs(A*x + B);
	}
	return abs(A*fungsi(A,B,k-1,x) + B);
}
