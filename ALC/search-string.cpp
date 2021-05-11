#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    //aku keluarin disini 
    int angka = 0;

    while(getline(cin, s)){
        int len = s.length();

        for(int i=0;i<len;i++){
            if(s[i] == '\"'){
                angka++;
                
                //                1          2
                //sebuah string = "halo dunia"
                //sebuah string = ''halo dunia`` --- kalau 
                //sebuah string = ``halo dunia''
                
                if(angka % 2 == 0){
                    cout << "``";
                    //angka++;
                } else {
                    cout << "''";
                    //di petik 2
                    angka = 0;
                }
            } else {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}
