#include <stdio.h>
#include <math.h>


int main(){
	float a;

	scanf("%f", &a);
	if(a >= -100000 && a <= 100000){
		printf("%d %d", (int)floor(a), (int)ceil(a));
	}
	return 0;
}
