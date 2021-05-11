#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x;
    cin >> x;
    
    int a,b;
    for(int i=0;i<x;i++){
        cin >> a >> b;
        cout << a+b << endl;
    }

    return 0;
}
