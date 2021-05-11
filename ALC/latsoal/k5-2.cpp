#include <iostream>
#include <vector>

using namespace std;

int main(){
    /*
    int arr[11], total=0; 
    arr[0] = 0;
    for (int a=1; a<=10; a++) {
        arr[a] = a + (arr[a-1] << 1);
        total += arr[a];
    }
    cout << total;
    */

    /*
    int X[11];
    for (int a=10; a>=1; a--) X[a] = 10/a;
    for (int a=10; a>=1; a--) X[10] += X[a];
    cout << X[10];

    */

    /*

    struct S {
        int satu[4], dua[4], tiga[4];
    };
    S data;
    for (int a=1; a<=4; a++) data.satu[a-1] = a;
    for (int a=4; a>=1; a--) data.tiga[4-a] = a;
    for (int a=0; a<4; a++) data.dua[a] = data.satu[a] + data.tiga[a];
    for(int a=0; a<4;a++) cout << data.dua[a] << ' ';
    */


    /*
    vector<int> V{3,4,1,2,0};
    for (auto A=V.rbegin(); A!=V.rend(); A++) cout << *A;
    */


    /*
    vector<int> V={3,4,1,2,0};
    int D;

    for (auto A=V.begin(); A!=V.end(); A++) {
        cin >> D;
        *A += D;
    }

    for(auto A=V.begin(); A!=V.end(); A++){
        cout << *A;
    }
    */


vector<int> V={3,4,1,2,0};
for (int a=1; a<=3; a++) V.pop_back();
for (int a=1; a<=5; a++) V.push_back(a);
for (int a=1; a<=3; a++) V.pop_back();
for (int N:V) cout << N;
    return 0;
}
