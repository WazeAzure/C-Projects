#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int angka;
	int binary[8];
	int i = 0;

	scanf("%d", &angka);

	while(angka > 0){
		binary[i] = angka % 2;
		angka = angka / 2;
		printf("%d", binary);
		i++;
	}
	

	return 0;
}
