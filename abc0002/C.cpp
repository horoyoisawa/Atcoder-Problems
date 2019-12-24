#include <bits/stdc++.h>
using namespace std;

int main() {
  int xa, ya, xb, yb, xc, yc;
  cin >> xa >> ya >> xb >> yb >> xc >> yc;

  xb -= xa;
  yb -= ya;
  xc -= xa;
  yc -= ya;

  cout << setprecision(20) << (double)abs(xb*yc-yb*xc) / 2 << endl;
}