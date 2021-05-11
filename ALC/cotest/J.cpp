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

        int sum = 0;
        int lol;
        while(temp != 0){
            lol = temp%10;
            if(lol == 4) sum++;
            temp = temp / 10;
        }
        cout << sum << endl;
    }
    return 0;
}
