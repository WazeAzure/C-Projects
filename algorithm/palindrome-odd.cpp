#include <iostream>

using namespace std;

int check(int x){
    int rev, digit;
    int num = x;
    while (x != 0){
        digit = x % 10;
        rev = (rev * 10) + digit;
        x = x/10;
    }
    if(num == rev) return 1;
    else return 0;
}

int main(){
    int i=1;
    int sum = 0;
    while(true){
        int lol = check(i);
        if(lol == 1){
            if(i%2 == 1){
                sum++;
            }
        }
        if(i == 10) break;
        cout << "i = " << i << " | nilai lol " << lol << " | sum " << sum << endl;
        if(sum == 201){
            cout << "angka ke " << sum << "dengan nilai i = " << i << endl;
            break;
        }
        i++;
    }
    return 0;
}
