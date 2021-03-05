#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;


int main(){
	int a,b,c,n;

	cin >> a >> b >> c >> n;

	for(int i=0;i<n-1;i++){
		int tmp = a;
		a = b;
		b = c;
		c = tmp + a + b;
	}

	cout << "result " << a;
	return 0;
}

