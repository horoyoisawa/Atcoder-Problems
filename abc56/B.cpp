#include <bits/stdc++.h>
using namespace std;

int main() {
  int W;
  int a;
  int b;
  cin >> W >> a >> b;

  int c = max(b, a);
  int d = min(a+W, b+W);

  if(c - d < 0) {
    cout << 0 << endl;
  } else {
    cout << c - d << endl;
  }
}