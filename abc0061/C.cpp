#include <bits/stdc++.h>
using namespace std;

bool custom(pair<int, int> a, pair<int, int> b) {
  return (a.first < b.first);
}
int main() {
  int n;
  long long int k;
  cin >> n >> k;
  vector<pair<int, int>> ab(n);
  for(int i=0;i<n;i++) {
    cin >> ab[i].first >> ab[i].second;
  }

  sort(ab.begin(), ab.end(), custom);

  long long int total = 0;
  int ans = 0;

  for(int i=0;i<n;i++) {
    total += ab[i].second;
    if(total >= k) {
      ans = ab[i].first;
      break;
    }
  }

  cout << ans << endl;
}