#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream infile;
  ofstream outfile;

  infile.open("input-seats-9058.txt");
  outfile.open("result.txt");

  int t, n, k;
  infile >> t;

  for(int i=0;i<t;i++){
      infile >> n >> k;
      int kunci[n];

      for(int j=0;j<n;j++){
          infile >> kunci[j];
      }

      int arr_ans[n];
      for(int j=0;j<n;j++){
          arr_ans[j] = j;
      }

      int final_result[n];
      for(int day=0;day<k;day++){
        int temp = 0;
        for(int lol=0;lol<n;lol++){
            final_result[kunci[lol]] = arr_ans[lol];
        }
        for(int lol=0;lol<n;lol++){
            arr_ans[lol] = final_result[lol];
        }
        cout << endl;
      }
      
          cout << i;
        outfile << "Case #" << i+1 << ": ";
        for(int lol=0;lol<n;lol++){
            outfile << final_result[lol] << " ";
        }
        outfile<<endl;
  }
   return 0;
}
