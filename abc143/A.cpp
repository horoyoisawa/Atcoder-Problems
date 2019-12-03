#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  int b;
  cin >> a >> b;

  if (a - b * 2 < 0) {
    cout << 0 << endl;
  } else {
    cout << a - b * 2;
  }
  return 0;
}