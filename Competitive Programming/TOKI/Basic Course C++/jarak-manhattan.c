#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int x1,y1,x2,y2;

	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	if(x1 >= -100000 && x1 <= 100000 && y1 >= -100000 && y1 <= 100000 && x2 >= -100000 && x2 <= 100000 && y2 >= -100000 && y2 <= 100000){
		printf("%d", (abs(x1 - x2) + abs(y1 - y2)));
	}
	return 0;
}
