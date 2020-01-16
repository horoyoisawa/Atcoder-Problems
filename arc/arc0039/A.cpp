#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int c = 0;

  if(b < 200) {
    int ten = b / 10 % 10;
    if(ten == 0) c = b - b % 10;
    else c = b - ten * 10;
  } else {
    c = 100 + b % 100;
  }

  int ans1 = a - c;

  int ans2 = 0;

  int hundred = a / 100;
  if(hundred == 9) {
    int ten = a / 10 % 10;
    if(ten == 9) ans2 = 999 - b;
    else ans2 = a - ten * 10 + 90 - b;
  } else {
    ans2 = a - hundred * 100 + 900 - b;
  }

  cout << max(ans1, ans2) << endl;
}