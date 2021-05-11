#include <iostream>

using namespace std;

void manual(int max){
    int f0 = 1;
    int f1 = 1;
    int temp = 0;
    cout << 1 << ' ' << 1 << ' ';
    for(int i=2;i<max;i++){
        temp = f0 + f1;
        f0 = f1;
        f1 = temp;
        cout << temp << ' ';
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int max;
    cin >> max;
   
    return 0;
}
