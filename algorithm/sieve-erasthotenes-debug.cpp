#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    int x;

    cin >> x;

    int isPrime[x+1];
    int debug[x+1];
    string oleh2[x+1];

    isPrime[0] = 0;
    isPrime[1] = 0;
    
    //debug
    debug[0] = 1;
    debug[1] = 1;

    for(int a=2;a<=x;a++){
        isPrime[a] = 1;
        
        //debug
        debug[a] = 0;
    }
    
    int batas = sqrt(x);
    

    for(int a=2;a<=batas;a++){
        if(isPrime[a] == 1){
            for(int b=a*a; b<= x; b+=a){
                isPrime[b] = 0;
                
                //debug part
                debug[b] += 1;

                oleh2[b] += to_string(b);
            }
        }
    }
    
    for(int i=2;i<=x;i++){
        if(isPrime[i] == 1){
            cout << i << endl;
        }
    }

    for(int i=2;i<=x;i++){
        cout << "angka " << i << " dicoret: " << debug[i] <<"x" << "  |  " << "oleh " << endl;
    }
    return 0;
}
