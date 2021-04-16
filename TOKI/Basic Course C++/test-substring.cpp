#include <iostream>
#include <string>

using namespace std;

int main(){
    string s = "hello";
    int len = s.length();

    string sub = s.substr(1, len-1-1);

    cout << sub;

    return 0;
}
