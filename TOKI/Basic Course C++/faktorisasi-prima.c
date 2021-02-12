#include <stdio.h>
#include <math.h>

int cekpangkat(int x, int i);

int main(){
	int x, i=2;
	int pangkat=0;

	scanf("%d", &x);
	
	while(i <= sqrt(x)){
		while(x%i == 0){
			x /= i;
			pangkat++;
		}
		printf("%d", i);
		if(pangkat>1){
			printf("^%d", pangkat);
		}
		printf(" x ");
		i++;
	}

	return 0;
}
