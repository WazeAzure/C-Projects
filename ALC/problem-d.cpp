#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    string s;
    string nums[] = {"one", "two"};

    for(int i=0;i<n;i++){
        cin >> s;
        if(s.length() == 5){
            cout << 3 << endl;
        } else {
            for(int k=0;k<2;k++){
                int benar = 0;
                for(int j=0;j<3;j++){
                    if(s[j] == nums[k][j]) benar++;
                }
                if(benar >= 2){
                    cout << k+1 << endl;
                    break;
                }
            }

        }
    }

    return 0;
}
