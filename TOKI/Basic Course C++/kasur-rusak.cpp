#include <iostream>
#include <string>

using namespace std;

int rec(string s){
    int len = s.length();
    if(len >= 2){
        string sub = s.substr(1, len-1-1);
        return (s[0] == s[len-1]) && rec(sub);
    } else {
        return 1;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;

    cin >> s;

    if(rec(s) == 1){
        cout << "YA";
    } else {
        cout << "BUKAN";
    }

    return 0;
}
