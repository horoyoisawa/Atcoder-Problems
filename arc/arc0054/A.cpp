#include <bits/stdc++.h>
using namespace std;

int main() {
  double l, x, y, s, d;

  cin >> l >> x >> y >> s >> d;

  if(y <= x) {
    if(d-s<0) cout << setprecision(20) << (d - s + l) / (x + y) << endl;
    else cout << setprecision(20) << (d - s) / (x + y) << endl;
  } else {
    if(d-s<0) {
      double ans1 = (d - s + l) / (x + y);
      double ans2 = (s - d) / (y - x);
      cout << setprecision(20) << min(ans1, ans2) << endl;
    } else {
      double ans1 = (d - s) / (x + y);
      double ans2 = (l - d + s) / (y - x);
      cout << setprecision(20) << min(ans1, ans2) << endl;
    }
  }
}