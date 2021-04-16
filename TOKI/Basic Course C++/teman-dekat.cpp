#include <iostream>
#include <cmath>

using namespace std;

int d;

int res(int a, int b, int arr[][2]){
    return pow(abs(arr[b][0] - arr[a][0]), d) + pow(abs(arr[b][1] - arr[a][1]), d);
}

int main(){
    int n, min=101, max=-1;
    
    cin >> n >> d;

    int arr[n][2];

    for(int i=0;i<n;i++){
        cin >> arr[i][0] >> arr[i][1];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp = res(i, j, arr);
            if(temp < min){
                min = temp;
            }
            if(temp > max){
                max = temp;
            }
        }
    }

    cout << min << ' ' << max;

    return 0;
}
