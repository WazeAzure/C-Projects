#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int penentu = 0;
    int temp;
    for(int i=0;i<n;i++){
        cin >> temp;
        if(temp%2 == 0) penentu++;
        else penentu--;
    }

    if(penentu > 0 ){
        cout << "READY FOR BATTLE";
    } else {
        cout << "NOT READY";
    }
    return 0;
}
