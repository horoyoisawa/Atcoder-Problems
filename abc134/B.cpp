#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  int D;

  cin >> N >> D;

  int total = 0;

  for(int i=0;;i++) {
    total++;
    if((2 * D + 1) * total >= N) {
      break;
    }
  }

  cout << total << endl;
}