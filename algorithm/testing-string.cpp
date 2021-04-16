#include <iostream>
#include <string>

using namespace std;


int main(){
    string hellos[4];

    for(int i=0;i<4;i++){
        hellos[0] = to_string(i);
    }

    for(int i=0;i<4;i++){
        cout << hellos[i] << endl;
    }
    return 0;
}
