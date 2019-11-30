#include <bits/stdc++.h>
using namespace std;
const double PI = acos(-1);

int main() {
  double a, b;
  int x;
  cin >> a >> b >> x;

  double sankakuMax = a * a * b / 2;

  if (x > sankakuMax) {
    double theta = atan((2 * b * pow(a, 2) - 2 * x) / pow(a, 3));

    cout << setprecision(10) << 360 * theta / (2 * PI) << endl;

  } else {
    double theta = atan(a * pow(b, 2) / (2 * x));

    cout << setprecision(12) << 360 * theta / (2 * PI) << endl;
  }
}