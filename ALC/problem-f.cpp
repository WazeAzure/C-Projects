#include <iostream>

using namespace std;

//5
//24 3 0 0 0 
// orang namanya si B
// 0 -> si B beneren bikin pesta
// !0 -> si B harus bikin psta dengan alasan blablabla 24.
// 24 -> karena si B itu org baik
// rumus = beneran bikin pesta - harus bikin pesta
// rumus = banyaknya !0 - banyaknya 0


//beneran input legit
// 1| 5 -> x 
//    1 2 3 0 0
// 2| 3 -> x
//    0 1 3
// 3| 4 -> x
//    1 2 3 4
// 4| 0 -> x end!!!

//x = 5
//true or false
while(true){
    ...
    
    ...
}

// banyak2in jam terbang dan mentor 
//


int main(){
    int x;
    int urutan = 1;
    while(true){
        int keseimbangan = 0;
        int masuk;

        //ini menentukan banyaknya
        cin >> x;
        if(x == 0) break;

        for(int i=0;i<x;i++){
            cin >> masuk; //input angkanya 1 1
            if(masuk != 0){
                keseimbangan++; // +1
            } else {
                keseimbangan--; // -1
            }
        }
        //
        // 24 0 0 5 1 2 0 0 6
        // jumlah 0 = 4; jumlah !0 = 5    ||    ----> 5 - 4 = 1
        // +1 -1 -1 +1 +1 +1 -1 -1 +1 = 1
        cout << "Case " << urutan << ": " << keseimbangan << endl;
        urutan++;
    }
    return 0;
}
