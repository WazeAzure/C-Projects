#include <stdio.h>
#include <math.h>

int main(){
	int x;
	
	scanf("%d", &x);
	printf("%d", x);
	for(int i=x/2;i>0;i--){
		if(x%i == 0){
			printf("\n%d", i);
		}
	}
	return 0;
}
