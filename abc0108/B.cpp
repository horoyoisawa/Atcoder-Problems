#include <bits/stdc++.h>
using namespace std;

int main() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  complex<int> one(x1, y1);
  complex<int> two(x2, y2);
  complex<int> r(0, 1);

  complex<int> vec = two - one;

  int x3, y3, x4, y4;

  vec = vec * r;

  x3 = real(vec) + x2;
  y3 = imag(vec) + y2;

  vec = vec * r;

  x4 = real(vec) + x3;
  y4 = imag(vec) + y3;

  cout << x3 << endl;
  cout << y3 << endl;
  cout << x4 << endl;
  cout << y4 << endl;
}