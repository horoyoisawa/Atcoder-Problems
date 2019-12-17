#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  vector<int> A(N);
  vector<vector<vector<int>>> xy(N);

  for(int i=0;i<N;i++) {
    int testi;
    cin >> testi;
    A[i] = testi;
    vector<vector<int>> a(testi, vector<int>(2));
    for(int j=0;j<testi;j++) {
      cin >> a[j][0] >> a[j][1];
    }
    xy[i] = a;
  }

  

  return 0;
}