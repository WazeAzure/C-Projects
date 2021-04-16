#include <stdio.h>

struct Node {
    int num;
    struct Node
};

int main(){
    struct Node hello;

    hello.num = 20;
    
    int* p = &hello.num;
    printf("%d", *(p));

    return 0;
}
