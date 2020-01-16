#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  vector<int> H(N);
  int max = 0;
  int total = 0;
  for(int i=0;i<N;i++) {
    cin >> H[i];
    if(max<=H[i]) {
      total++;
      max = H[i];
    }
  }

  cout << total << endl;
}