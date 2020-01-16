#include <bits/stdc++.h>
using namespace std;

int main() {
  int X;
  int t;
  cin >> X >> t;
  if(X < t) {
    cout << 0 << endl;
  } else {
    cout << X - t << endl;
  }
}