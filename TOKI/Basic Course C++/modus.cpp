#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int n, max=0;

	cin >> n;

	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
		if(arr[i] > max){
			max = arr[i];
		}
	}

	int *p = (int *)calloc(max, sizeof(int));

	for(int j=0;j<n;j++){
		*(p + arr[j] - 1) += 1;
	}
	int ans=0,ians=0;
	for(int i=0;i<max;i++){
		if(arr[i] > ans){
			ians = i;
			ans = arr[i];
		} else if(ans == arr[i] && ians < i){
			ians = i;
		}
	}

	cout << ians + 1 << " " << ans;
	delete[] p;

	return 0;
}
