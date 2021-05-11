#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if(a && (!b || c)){
        cout << "masuk" << endl;
    } else if (!a || b && c) cout << 5;
    return 0;
}
