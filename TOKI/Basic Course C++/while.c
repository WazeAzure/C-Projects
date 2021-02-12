#include <stdio.h>
#include <stdio.h>

int main(){
	char lol[101];
	int x = 1;

	while(x != EOF){
		x = scanf("%s", &lol);
		printf("%s\n", lol);
	}

	return 0;
}
