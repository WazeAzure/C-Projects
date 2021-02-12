#include <iostream>

using namespace std;

int fpb(int a, int b){
	if(b == 0){
		return a;
	}
	return fpb(b,a%b);
}
int main(){
	long long a,b,c,d, x;

	cin >> a >> b >> c >> d;
	
	x = b;
	a = a*d;
	b = b*c;
	c = x*d;
	d = a + b;
	
	x = fpb(d,c);
	c = c/x;
	d = d/x;

	cout << d << " " << c;
	return 0;
}
