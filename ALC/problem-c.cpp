#include <iostream>
#include <string>
using namespace std;

char a[] = {'`','1','2','3','4','5','6','7','8','9','0','-','=','Q','W','E','R','T','Y','U','I','O','P','[',']','\\','A','S','D','F','G','H','J','K','L',';','\'','Z','X','C','V','B','N','M',',','.','/'};

int main(){
    string s;
    
    int arr = sizeof(a)/sizeof(a[0]);

    while(getline(cin, s)){

        int len = s.length();

        for(int i=0;i<len;i++){
            if(s[i] == ' ') {
                cout << ' ';
                continue;
            }
            for(int j=0;j<arr;j++){
                if(s[i] == a[j]) cout << a[j-1];
            }
        }
        cout << endl;
    }
    return 0;
}
