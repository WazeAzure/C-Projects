#include <stdio.h>
#include <string.h>

int main(){
	char arr[10];
	int res;

	scanf("%s", &arr);
	
	res = strcmp(arr, "hi");
	
	if(res == 0){
		printf("Hello");
	}
	return 0;
}
