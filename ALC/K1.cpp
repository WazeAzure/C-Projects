#include <iostream>
#include <string>
#include <cmath>

#define pi (3.141592653583793)

using namespace std;

int main(){

    /*
    char a = '0';
    char b = a + 6;

    cout << "ASCI 0 " << (int)a << endl;
    cout << "ASCII " << b << " " << (int) b;
*/

    /*
    double a = 4e-6;
    double b = 3.00004e4;
    //7 C
    //8 D
    //di format srch ggl cb

    cout << "ini a dan b : " << a << ' ' << b << endl;
    cout << fixed << a << ' ' << b << endl;
    cout << fixed << a+b << endl;
    */

    /*
    double sudut;
    cin >> sudut;
    cout.precision(2);
    cout << "nilai sudut/180 : " << sudut/180 << endl;
    cout << "nilai sudut/180 * pi : " << sudut/180 * pi << endl;
    cout << "nilai sin (sudut/180) : " << sin(sudut/180) << endl;
    cout << fixed << sin(sudut/180 * pi) << endl;
    */

    int A = 5;
    //int C = 2 * ++A;
    int B = 2 * ++A - 7;
    A += B;

    cout << A;

    return 0;
}
