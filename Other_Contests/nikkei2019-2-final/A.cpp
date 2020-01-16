#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);

  for(int i=0;i<n;i++) cin >> a[i];

  multiset<int> former(a.begin(), next(a.begin(), 1));
  multiset<int> latter(next(a.begin(), 2), a.end());

  long long int ans = 0;
  for(int i=1;i<n-1;i++) {
    auto it_former = former.lower_bound(a[i]);
    auto it_latter = latter.lower_bound(a[i]);

    long long int d_former = distance(former.begin(), it_former);
    long long int d_latter = distance(latter.begin(), it_latter);

    ans += d_former * d_latter;

    former.insert(a[i]);
    auto it = latter.find(a[i+1]);
    latter.erase(it, next(it, 1));
  }

  cout << ans << endl;
}