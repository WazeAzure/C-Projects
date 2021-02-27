#include <stdio.h>

void fungsi_1(int parameter);
void fungsi_2(int parameter);

void main(){
	int n;
	scanf("%d", &n);
	int input[n];

	for(int i=0;i<n;i++){
		scanf("%d", &input[i]);
	}

	for(int j=0;j<n;j++){
		if(input[j]%2 != 0){
			fungsi_1(input[j]);
		} else {
			fungsi_2(input[j]);
		}
	}
}

void fungsi_1(int parameter){
	printf("\n");
	for(int i=0;i<parameter;i++){
		for(int j=0;j<parameter;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
}

void fungsi_2(int parameter){
	printf("\n");
	for(int i=0;i<parameter;i++){
		for(int j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
}
