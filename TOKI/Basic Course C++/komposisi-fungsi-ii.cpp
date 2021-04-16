#include <iostream>
#include <cmath>

using namespace std;

int rec(int a, int b, int k, int x){
    if(k > 0){
        return abs(a * rec(a,b,k-1,x) + b);
    }
    return x;
}

int main(){
    int a, b, k, x;

    cin >> a >> b >> k >> x;

    cout << rec(a,b,k,x);
    return 0;
}
