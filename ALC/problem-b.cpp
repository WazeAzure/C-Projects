#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        
        int temp;

        int min = 1000, max = 1000;
        // input 5
        // if(5 > max) -> max = 5;

        for(int j=0;j<x;j++){
            cin >> temp[j];
            if(temp > max) max = temp;
            if(temp < min) min = temp;
        }

        //input 2 4 6
        //  i=1 -> 2 .
        //     if(2 > ma) max = 2;
        //     if(2 < min) min = 2;
        //  i=2  -> 4
        //      4 > 2 max = 4;
        //      4 < 2 min = 2;
        //  i=3  -> 6
        //      6 > 4 max = 6;
        //      6 < 2 min = 2;

        int avg = (min + max)/2;
        cout << (max-avg)*2 + (avg-min)*2 << endl;
        // 2 (max - avg) + 2 (avg - min) = 2 (max - avg + avg - min) = 2 (max - min)
    }
    return 0;
}
