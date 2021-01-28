#include <stdio.h>
#include <stdlib.h>

int main(){
	char* arr = (char*)malloc(100 * sizeof(char));

	scanf("%s", arr);

	printf("%s", arr);

	return 0;
}
