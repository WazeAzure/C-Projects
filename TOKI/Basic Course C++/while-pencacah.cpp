#include <cstdio>
#include <iostream>

using namespace std;

int main() {
  int masukan;
  int total = 0;

  while (scanf("%d", &masukan) != EOF) {
    total += masukan;
  }
  cout << total;
  return 0;
}
