#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int arr[10] = {0,0,0,0,0,0,0,0,0,0};
int* p = arr;
int data = 0;

void del();
void add(int x);
void edt(int indx, int x);
void view();

int main(){
	char word[10] = "start";
	int x = 0;
	int wordI = 1;
	int indx;

	while(wordI != 0){
		scanf("%s", &word);
		
		wordI = strcmp(word, "end");
		int delI = strcmp(word, "del");
		int inI = strcmp(word, "add");
		int edtI = strcmp(word, "edit");
		
		if(delI == 0){
			del(x);
		}else if(inI == 0){
			scanf("%d", &x);
			add(x);
		}else if(edtI == 0){
			scanf("%d %d", &indx, &x);
			edt(indx, x);
		}

	}


	return 0;
}

void del(){
	*(p + data-1) = 0;
	data--;
	if(data < 0){
		data = 0;
	}
	view();
}

void add(int x){
	*(p + data) = x;
	data++;
	view();
}

void edt(int indx, int x){
	*(p + indx) = x;
	view();
}

void view(){
	int i=0;
	printf("isi dari note\n");
	while(*(p+i) != 0){
		printf("%d ", *(p+i));
		i++;
	}
	printf("\n-----------------\n");
}
