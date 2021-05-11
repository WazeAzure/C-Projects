#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  ofstream outfile;
  
  outfile.open("json-daerah.txt");
  
  int T = 34;
  
  string arr[T] = {"aceh", "sumut", "sumbar", "riau", "kepri", "jambi", "sumsel", "babel", "bengkulu", "lampung", "dki", "banten", "jabar", "jateng", "diy", "jatim", "bali", "ntb", "ntt", "kalbar", "kalteng", "kalsel", "kaltim", "kaltara", "sulut", "gorontalo", "sulteng", "sulbar", "sulsel", "sultenggara", "maluku", "malut", "pabar", "papua"};

   for(int lol=0;lol<T;lol++){
     outfile << "\""<< arr[lol] << "\" : {" << endl;
     outfile << "\t\"1\": " << 0 << "," << endl;
     outfile << "\t\"2\": " << 0 << "," << endl;
     outfile << "\t\"3\": " << 0 << "," << endl;
     outfile << "\t\"4\": " << 0 << "," << endl;
     outfile << "\t\"5\": " << 0 << ","<< endl;
     outfile << "\t\"no\": " << 0 << "," << endl;
     outfile << "\t\"yes\": " << 0 << endl;
     outfile << "}," << endl;
   }
   return 0;
}
