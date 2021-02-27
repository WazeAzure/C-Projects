#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream infile;
	ofstream outfile;
	
	infile.open("input-party-206a.txt");
	outfile.open("result-lol.txt");

	if(infile.fail() || outfile.fail()){
		exit(1);
	}

	int t;
	int n;

	infile >> t;
	
	int result[t];

	for(int i=0;i<t;i++){
		infile >> n;
		int arr[n];
		int total = 0;
		for(int j=0;j<n;j++){
			infile >> arr[j];
			if(arr[j] > 0){
				total += arr[j];
			}
		}
		result[i] = total;
	}
	for(int h=0;h<t;h++){
		outfile << "Case #" << h+1 << ": " << result[h] << "\n";
	}

	infile.close();
	outfile.close();

	return 0;

}
