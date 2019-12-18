#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  double m;
  cin >> n >> m;

  double plus = m / 60;

  double hAngle = 30 * (n % 12) + 30 * plus;
  double mAngle = 360 * plus;

  double diff = abs(hAngle-mAngle);

  if(diff > 180) {
    cout << 360 - diff << endl;
  } else {
    cout << diff << endl;
  }
}