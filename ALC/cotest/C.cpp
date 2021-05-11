#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tarik; float tabungan;
    cin >> tarik >> tabungan;

    if(tarik % 5 == 0){
        tabungan -= (tarik + 0.5);
    }

    cout << fixed << setprecision(2) << tabungan;
    return 0;
}
