#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, k, s, t;
  cin >> a >> b >> c >> k >> s >> t;
  int fee = 0;
  fee += a * s;
  fee += b * t;

  if(s + t > k-1) fee -= c * (s + t);

  cout << fee << endl;
}