#include <stdio.h>

int reverse(int x);

int main(){
	int a,b, result;
	
	scanf("%d %d", &a, &b);

	result = reverse(reverse(a) + reverse(b));

	printf("%d", result);
	return 0;
}

int reverse(int x){
	int a = 0;

	while(x>0){
		a = (x%10) + (a*10);
		x = x / 10;
	}

	return a;
}
