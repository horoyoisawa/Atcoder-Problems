#include <bits/stdc++.h>
using namespace std;

int main() {
  int k, n;
  cin >> n >> k;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  long long int total = 0;
  long long int ans = 0;
  for(int i=0;i<k;i++) total += a[i];

  ans += total;

  for(int i=0;i<n-k;i++) {
    total = total - a[i] + a[k+i];
    ans += total;
  }

  cout << ans << endl;
}