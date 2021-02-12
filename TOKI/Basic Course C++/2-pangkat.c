#include <stdio.h>

int main(){
	float x;
	scanf("%f", &x);

	while(x > 1){
		x /= 2;
	}
	if(x == 1){
		printf("ya");
	} else {
		printf("bukan");
	}
}
