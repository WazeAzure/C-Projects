#include <stdio.h>

int main(){
	int a;

	scanf("%d", &a);
	if(a > 0 && a <= 100000){
		if(a/100000 > 0){
			printf("ratusribuan");
		} else if(a/10000 > 0){
			printf("puluhribuan");
		} else if(a/1000 > 0){
			printf("ribuan");
		} else if(a/100 > 0){
			printf("ratusan");
		} else if(a/10 > 0){
			printf("puluhan");
		} else {
			printf("satuan");
		}
	}	

	return 0;
}
