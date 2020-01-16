#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, m;
  cin >> n >> k >> m;

  vector<int> a(n-1);
  int now = 0;
  for(int i=0;i<n-1;i++) {
    cin >> a[i];
    now += a[i];
  }

  int goal = n * m;
  if(now + k < goal) cout << -1 << endl;
  else cout << max(goal - now, 0) << endl;
}