#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int temp;
    for(int i=0;i<n;i++){
        cin >> temp;
        cout << temp/2 + 1 << endl;
    }

    return 0;
}
