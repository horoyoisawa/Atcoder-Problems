#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  bool yes = false;

  for(int i=1;i<=b;i++) {
    int mul = a * i;
    if(mul % b == c) {
      yes = true;
      break;
    }
  }

  if(yes) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}