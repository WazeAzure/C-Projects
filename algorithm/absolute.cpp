#include <iostream>

using namespace std;

int abs(int x){
    if(x < 0) x = -x;
    return x;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cout << abs(-20);

    return 0;
}
