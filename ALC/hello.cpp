#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int* lol = new int(5);
    
    for(int i=0;i<5;i++){
        *(lol + i) = i+1;
    }

    for(int i=0;i<5;i++){
        cout << *(lol + i);
    }

    delete(lol);
    return 0;
}
