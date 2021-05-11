#include <iostream>

using namespace std;

int main(){
    
string S = "gfhfgh";
char ganti='a';
int P;
do {
    P = S.find('h');
    if (P!=-1) S.replace(P,1,3,ganti++);
} while (P!=-1);
    
cout << S;
    return 0;
}
