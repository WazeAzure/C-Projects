#include <iostream>

using namespace std;

struct Hasil {
    double jumlah, avg;
};
Hasil Hitung(int Arr[], int N) {
    Hasil H;
    H.jumlah = 0;
    for (int A=0; A<N; A++) H.jumlah += Arr[A];
    H.avg = H.jumlah/N;
    return H;
}

int main(){
    int Arr[6] = {3,4,2,6,5,1};
    Hasil H = Hitung(Arr, 4);
    cout << fixed << H.avg;
    return 0;
}
