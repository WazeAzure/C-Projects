#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, a;
    int temp, jumlah = 0;
    cin >> n >> a;

    for(int i=0;i<n;i++){
        cin >> temp;
        if (temp % a == 0) jumlah++; 
    }
    cout << jumlah;
    return 0;
}
