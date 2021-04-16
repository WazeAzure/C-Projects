#include <iostream>

using namespace std;

string convert_binary(int x){
    /*
    if(x == 0){
        return 0;
    }
    return x % 2 + 10 * convert_binary(x/2);
    */

    if(x == 1){
        return "1";
    } else if(x % 2 == 1){
        return (string)convert_binary(x/2) + "1";
    } else {
        return (string)convert_binary(x/2) + "0";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x;
    cin >> x;

    cout << convert_binary(x);

    return 0;
}
