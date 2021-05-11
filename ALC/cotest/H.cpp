#include <iostream>

using namespace std;

int cur[] = {100, 50, 10, 5, 2, 1};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, temp;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> temp;
        
        int count = 0;
        int lol;
        for(int j=0;j<6;j++){
            if(temp / cur[j] > 0){
                lol = temp / cur[j];
                temp -= (lol * cur[j]);
                count += lol;
            }
        }
        cout << count << endl;
    }
    return 0;
}
