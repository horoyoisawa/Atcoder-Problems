#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b, c, d;
  cin >> a >> b >> c >> d;

  double winRateA = b / a;
  double winRateB = d / c;

  if(winRateA>winRateB) cout << "TAKAHASHI" << endl;
  else if(winRateA==winRateB) cout << "DRAW" << endl;
  else cout << "AOKI" << endl;
}