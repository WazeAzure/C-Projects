#include <stdio.h>

int main(){
	int a;

	scanf("%d", &a);
	if(a > 0 && a <= 100000){
		printf("positif");
	}else if(a < 0 && a>= -100000){
		printf("negatif");
	} else if(a == 0){
		printf("nol");
	}
	
	return 0;
}
