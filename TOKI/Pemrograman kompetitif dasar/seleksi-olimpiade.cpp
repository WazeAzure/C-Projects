#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
	int n, npeserta, lolos;
	string idpeserta;
	cin >> n;

	string daftar[n];
	int daftarnilai[n][3];
	
	//in
	for(int i=0;i<n;i++){
		cin >> npeserta >> lolos;
		cin >> idpeserta;
		for(int j=0;j<npeserta;i++){
			cin >> daftar[j] >> daftarnilai[j][0] >> daftarnilai[j][1] >> daftarnilai[j][2];
		}
	}

	//out
	for(int i=0;i<n;i++){
		cout << daftar[i] << " " << daftarnilai[i][0] << " " << daftarnilai[i][1] << " " << daftarnilai[i][2];
	}
	return 0;
}
