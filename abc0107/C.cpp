#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<long long int> x(n);
  for(int i=0;i<n;i++) cin >> x[i];

  long long int ans = LLONG_MAX;

  for(int i=0;i<n-k+1;i++) {
    long long int closer = min(abs(x[i]), abs(x[i+k-1]));
    if(closer + x[i+k-1] - x[i] < ans) ans = closer + x[i+k-1] - x[i];
  }

  cout << ans << endl;
}