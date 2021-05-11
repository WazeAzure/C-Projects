#include <iostream>

using namespace std;

int subs(int x){
    int temp=0;
    while(x != 0){
        temp += x % 10;
        x = x/10;
    }
    if(temp/10 != 0){
        temp = subs(temp);
    }
    return temp;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x;
    while (true){
        cin >> x;
        if(x == 0){
            break;
        }
        if(x/10 == 0){
            cout << x << endl;
        } else {
            cout << subs(x) << endl;
        }
    }
    return 0;
}
