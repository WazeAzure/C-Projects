#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream infile;
	ofstream outfile;

	infile.open("lol.txt");
	outfile.open("result.txt");

	if(infile.fail() || outfile.fail()){
		cerr << "file failed to load";
		exit(1);
	}

	int x, y;

	infile >> x >> y;

	outfile << "this is " << x << ", and this is " << y;

	infile.close();
	outfile.close();

	return 0;
}
