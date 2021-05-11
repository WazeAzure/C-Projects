#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool aaa(int n) {
    string s = to_string(n);
    bool p = true;
    while (s.length()>0 && p) {
        if (s[0]==s[s.length()-1]) {
            if (s.length()>1) {
                s.pop_back();
                s.erase(s.begin());
            } else s.clear();
        } else p = false;
    }
    return p;
}


int main(){
    cout << aaa(12341);
    return 0;
}
