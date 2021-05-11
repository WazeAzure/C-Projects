#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    int temp;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> temp;
        int num = 0;
        while(temp != 0){
            num = num*10 + temp%10;
            temp = temp / 10;
        }
        cout << num << endl;
    }
    return 0;
}
