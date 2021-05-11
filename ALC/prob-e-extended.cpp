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

    int x = 1;
    int sum = 0;
    while (true){
        int temp = subs(x);
        if(temp == 4){
            sum++;
            cout << "bilangan ke " << sum << " adalah " << x << endl;
        }
        if(sum == 21){
            break;
        }
        x++;
    }
    return 0;
}
