#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  if(a < 0 && b < 0) {
    cout << b - a << endl;
  } else if (a < 0 && b > 0) {
    cout << abs(a) + b - 1 << endl;
  } else {
    cout << b - a << endl;
  }
}