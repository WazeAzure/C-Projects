#include <stdio.h>

int main(){
	int a,b;
	float luas;
	
	scanf("%d %d", &a, &b);

	luas = 0.5 * a * b;

	printf("%.2f", luas);

	return 0;
}
