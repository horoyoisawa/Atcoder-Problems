#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, t;
  cin >> a >> b >> t;
  int d = b - a;
  if((t-a) % d == 0) {
    cout << a + d * (t-a)/d << endl;
  } else {
    cout << a + d * ((t-a)/d+1) << endl;
  }
}