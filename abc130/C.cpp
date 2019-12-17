#include <bits/stdc++.h>
using namespace std;

int main() {
  double A, B;
  int x, y;
  cin >> A >> B >> x >> y;

  cout << A * B / 2 << endl;

  if(x == A / 2 && y == B / 2) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }
}