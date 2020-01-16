#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<pair<string, int>> a(n);
  for(int i=0;i<n;i++) cin >> a[i].first >> a[i].second;
  string x;
  cin >> x;
  int from = 0;
  for(int i=0;i<n;i++) {
    if(a[i].first == x) {
      from = i + 1;
      break;
    }
  }
  int ans = 0;
  for(int i=from;i<n;i++) {
    ans += a[i].second;
  }

  cout << ans << endl;
}