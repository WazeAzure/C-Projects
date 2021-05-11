#include <iostream>

using namespace std;

//ini untuk cek 
//1, 2, 4, 8, 16
int checkLol(int x){
    int res = 1;
    for(int i=0;res<=x;i++){
        res *= 2;
    }
    res /= 2;
    int copy = res;
    copy -= 1;
    x -= res;
    copy -= x;
    
    return copy;
}

int main(){
    int x;
    cin >> x;
    
    cout << checkLol(x);
    return 0;
}
