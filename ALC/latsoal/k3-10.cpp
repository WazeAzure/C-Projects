#include <iostream>

using namespace std;

int main(){
    int a=7, b=8, c=2;

    if (a%3==0) c+=(b>c)?(b+(c*3)/2):(c+(b*3)/2);
	else b+=(b>c)?(b+(c*3)/2):(c+(b*3)/2);
	cout << a << b << c;
    return 0;
}
