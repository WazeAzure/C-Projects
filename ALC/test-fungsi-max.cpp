#include <iostream>
#include <algorithm> //

using namespace std;

bool comp(int a, int b){
    return a < b;
}

int main(){

    cout << "angka terbesar " << max( {1, 2, 3, 4, 7} , comp);

    return 0;
}
