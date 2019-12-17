#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);

  for(int i=0;i<N;i++){
    cin >> A[i];
  }

  double total = 0;

  for(int i=0;i<N;i++) {
    total += (1.0 / A[i]);
  }

  cout << setprecision(20) << 1.0 / total << endl;
}