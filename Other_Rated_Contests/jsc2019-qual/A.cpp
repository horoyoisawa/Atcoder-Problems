#include <bits/stdc++.h>
using namespace std;

pair<int, int> mul(int n) {
  int d1 = n % 10;
  int d2 = n / 10;

  pair<int, int> p = make_pair(d2, d1);

  return p;
}

int main() {
  int m;
  int d;

  cin >> m >> d;

  int ans = 0;

  for(int i=1;i<=d;i++) {
    pair<int, int> p = mul(i);
    if(p.first >= 2 && p.second >= 2 && p.first * p.second <= m) ans++;
  }

  cout << ans << endl;
}