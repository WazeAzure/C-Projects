#include <stdio.h>

int fpb(int x, int y);

int main(){
	int x, y, result;

	scanf("%d %d", &x, &y);

	result = fpb(x,y);
	printf("This is the result, fpb dari %d dan %d adalah %d", x, y, result);

	return 0;
}

int fpb(int x, int y){
	if(y == 0){
		return x;
	} else {
		fpb(y,x%y);
	}
}
