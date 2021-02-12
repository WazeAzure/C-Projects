#include <stdio.h>

int main(){
	int n;
	int count=0;
	scanf("%d", &n);

	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			printf("%d", count);
			count++;
			if(count >= 10){
				count = 0;
			}
		}
		printf("\n");
	}
	return 0;
}
