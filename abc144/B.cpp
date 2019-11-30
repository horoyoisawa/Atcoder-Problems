#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  bool yes = false;

  for(int i=1;i<10;i++) {
    if(n < i * 9 + 1 && n % i == 0) {
      yes = true;
      break;
    }
  }

  if(yes) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}