#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int maxi;
    string s;
    string angka[] = {"one", "two"};

    cin >> maxi;

    int jumlaha = 0, jumlahb  =0;

    for(int i=0;i<maxi;i++){
        cin >> s;
        int panjang = s.length();

        if(panjang == 5){
            cout << 3 << endl;
        }
        else {
            for(int j=0;j<3;j++){
                if(s[j] == angka[0][j]) jumlaha++;
                if(s[j] == angka[1][j]) jumlahb++;
            }
        
            /*
            if(jumlaha > jumlahb){
                cout << 2 << endl;
            } else {
                cout << 3 << endl;
            }
            */
        }
    }

    return 0;
}
