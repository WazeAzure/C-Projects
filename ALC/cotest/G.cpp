#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, temp;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> temp;
        int last = temp%10;

        while(temp >= 10){
            temp = temp / 10;
        }
        int first = temp;
        cout << first + last << endl;
    }

    return 0;
}
