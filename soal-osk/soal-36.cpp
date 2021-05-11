#include <iostream>

using namespace std;

int panas(int x){
   int dingin = 0;
   while(x >= 0){
       dingin += 1;
       if(x % 3 == 0){
           x -= 5;
           cout << "3 " << x << endl;
       }
       else if(x % 5 == 0){
           x -= 3;
           cout << "5 " << x << endl;
       }
       else{
           x -= 1;
           cout << "1 " << x << endl;
       }
   }
   return dingin;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cout << panas(789);

    return 0;
}
