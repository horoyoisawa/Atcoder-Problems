#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;

  int ans = 0;

  if(x < y) {
    if((x < 0 && y < 0) || (x > 0 && y > 0)) cout << y - x << endl;
    
  } else if(x == y) {
    cout << 0 << endl;
  } else {
    if(x == 0 || y == 0) {
      ans = abs(abs(x) - abs(y));
    } else {
      abs(abs(x) - abs(y)) + 1;
    }
  }
}