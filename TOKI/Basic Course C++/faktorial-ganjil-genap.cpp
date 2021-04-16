#include <iostream>
#include <cmath>

using namespace std;

int fact(int x){
    if(x > 1){
        return x * fact(x-1);
    } else {
        return 1;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x;
    cin >> x;

    cout << fact(x)/pow(2, (x/2));

    return 0;
}
