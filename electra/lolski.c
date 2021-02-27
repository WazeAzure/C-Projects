#include <stdio.h>

int x;
void nilai1(int y){
	x = y;
}
void nilai2(int y){
	int x=y;
}
void nilai3(int y){
	int x = y;
}
int main(){
	x = 1;
	nilai1(10);
	nilai2(3);
	nilai3(4);
	printf("%d", x);
	return 0;
}
