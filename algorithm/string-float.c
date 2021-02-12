#include <stdio.h>

int main(){
	int n;
	char string[n][10];
	float total = 0;

	scanf("%d", &n);

	for(int i=0;i<n;i++){
		printf("Masuukan string ke string[%d]: ", i);
		scanf("%s\n", &string[i]);
		total += (float)string[i][10];
	}
	printf("TOtalnya adalah %f", total);
	return 0;
}
