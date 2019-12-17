#include <bits/stdc++.h>
using namespace std;

int main() {
  int A;
  int B;
  cin >> A >> B;

  int total = 1;

  int taps = 0;

  while(total < B) {
    total += (A-1);
    taps++;
  }

  cout << taps << endl;

  return 0;

}