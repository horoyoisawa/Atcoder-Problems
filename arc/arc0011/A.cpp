#include <bits/stdc++.h>
using namespace std;

int main() {
  int m, n, N;
  cin >> m >> n >> N;
  int small = 0;
  int big = N;
  int ans = 0;
  while(big != 0) {
    ans += big;
    small += big;
    big = (small / m) * n;
    small = small % m;
  }

  cout << ans << endl;
}