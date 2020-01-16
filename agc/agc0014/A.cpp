#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  
  int firstA = a;
  int firstB = b;
  int firstC = c;

  int ans = 0;

  while(a % 2 == 0 && b % 2 == 0 && c % 2 == 0) {
    int d = (b + c) / 2;
    int e = (c + a) / 2;
    int f = (a + b) / 2;

    a = d;
    b = e;
    c = f;

    ans++;

    if(a == firstA && b == firstB && c == firstC) {
      ans = -1;
      break;
    }
  }

  cout << ans << endl;
}