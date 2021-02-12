#include <stdio.h>

int main(){
	int n, x;

	scanf("%d %d", &n, &x);

	for(int i=1;i<=n;i++){
		if(i % x == 0){
			printf("* ");
		} else {
			printf("%d ", i);
		}
	}
	
	return 0;
}
