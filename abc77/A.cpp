#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<char> c(6);
  for(int i=0;i<6;i++) {
    cin >> c[i];
  }

  bool yes = true;

  for(int i=0;i<3;i++) {
    if(c[i] != c[5-i]) {
      yes = false;
    }
  }

  if(yes) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}