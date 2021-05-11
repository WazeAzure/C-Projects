#include <iostream>

using namespace std;


int Arr[12] = {5,4,1,2,9,7,3,8,6,3,7,4};
int R(int a, int b) {
    if (a==b) return Arr[a]; else {
        int m=(a+b)/2;
        int ma=R(a,m);
        int mb=R(m+1,b);
        return (ma>mb)? ma: mb;
    }
}


int main(){
    cout << R(6,10);
    return 0;
}
