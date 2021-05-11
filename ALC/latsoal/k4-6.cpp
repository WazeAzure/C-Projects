#include <iostream>

using namespace std;

int main(){
    /*
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    while(a > b){
        a -= b;
        c++;
        d += b;
    }

    cout << c << ' ' << d;

    */

    /*
    int c = 0;
    int n, r;
    cin >> n >> r;

    for(int a = 1; a <= n; a++){
        int d = 1;
        for(int b = 1; b <= a; b++) d*=r;
        c+=d;
    }
    cout << c;
    */
    int n = 10, sum = 0;
    for (int a=0; a<n; a++) for (int b=1; b<n; b++) if (b<a) sum++;
    cout << sum;
    return 0;
}
