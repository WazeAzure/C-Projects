#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    int i=0;
    while(getline(cin, s)){
        cout << "strin " << i << ' ' << s << endl;
        i++;
    }
    return 0;
}
