#include <iostream>

using namespace std;

int main(){
	string x;
	char* p = &x;
	cin >> x;
	cout << "You typed: " << x;
	cout << "isi dari char adalah " << *p;
	return 0;
}
