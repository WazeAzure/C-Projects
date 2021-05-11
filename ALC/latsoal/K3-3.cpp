#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    
    if ((t%100==0 || t%4==0) || t%400==0) cout << "kabisat";

    return 0;
}
