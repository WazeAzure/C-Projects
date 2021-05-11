#include <iostream>

using namespace std;

int main(){
    while(true){
        int papan[8][8];
        int cek = 0;

        //catat posisi king
        int king[1][2];
        int KING[1][2];

        //init papan
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin >> papan[i][j];
                if(papan[i][j] == '.') cek++;
                if(papan[i][j] == 'k') {
                    king[0][0] = i;
                    king[0][1] = j;
                }
                if(papan[i][j] == 'K'){
                    KING[0][0] = i;
                    KING[0][1] = j;
                }
            }
        }

        //kalau jumlah titik 64 a.k.a kosong total maka break
        if(cek != 64) break;

        //cari ada dimana king dan KING
        
    }
    return 0;
}
