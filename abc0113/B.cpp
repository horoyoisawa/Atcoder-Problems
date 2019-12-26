#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  int T;
  int A;
  cin >> N >> T >> A;
  vector<int> H(N);
  for(int i=0;i<N;i++) {
    cin >> H[i];
  }

  double min = 10000000;
  int ans = N+1;
  for(int i=0;i<N;i++) {
    double tem = T - H[i] * 0.006;
    if(abs(tem - A) < min) {
      min = abs(tem - A);
      ans = i+1;
    }
  }

  cout << ans << endl;
}