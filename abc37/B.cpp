#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> series(n);

  for(int i=0;i<q;i++) {
    int l, r, t;
    cin >> l >> r >> t;

    for(int j=l-1;j<r;j++) {
      series[j] = t;
    }
  }

  for(int k=0;k<n;k++) {
    cout << series[k] << endl;
  }
}