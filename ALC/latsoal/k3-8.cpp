#include <iostream>

using namespace std;

int main(){
    //int a, b;
    //cin >> a >> b;
    
    //cout << a ^ b;

    int a = 4, b = 4, c = 4;
    cout << "ini ++a " << ++a << endl;
    cout << "ini b++ " << b++;
    cout << "--------" << endl;
    c += ++c;
    cout << "ini a += ++a" << c << endl;
    /*
    a += ++a;
    cout << a << endl;
    cout << (a>4?8:7) << endl;
    a += (a>4?8:7);
    cout << a;
    */
    return 0;
}
