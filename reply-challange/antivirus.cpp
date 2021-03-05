#include <iostream>
#include <string>

using namespace std;

int main(){
	int t;

	cin >> t;

	for(int i=0;i<t;i++){
		int arr[4], virus, max = 0;
		
		//input number
		for(int k=0;k<4;k++){
			cin >> arr[k];
			if(arr[k] > max){
				max = arr[k];
			}
		}
		cin >> virus;
		
		//input string
		string arr_str[4];
		for(int j=0;j<4;j++){
			cin >> arr_str[j];
		}

		char ans[virus];
		//finding the key
		for(int m=0;m<max;m++){
			cin 
		}

		//output
		for(int l=0;l<4;l++){
			cout << arr_str[l];
		}
	}
	return 0;
}
