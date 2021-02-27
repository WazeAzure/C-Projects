#include <stdio.h>

int fungsi(int n){
	int i=1, j = 1;
	while(j <= n){
		i = i*j;
		j++;
	}
	return i;
}


int main(){
	int a,i,j;
	int temp = 0;
	scanf("%d", &a);
	for(i = 0; i < a ; i ++){
		for(j=0;j<=i;j++){
			temp = fungsi(i)/fungsi(i)*fungsi(i-1);
			printf("%d", temp);
		}
		printf("\n");
	}
	return 0;
}
