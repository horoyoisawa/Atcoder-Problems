#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  string s;
  cin >> a >> b >> s;

  bool yes = true;

  for(int i=0;i<s.size();i++) {
    if(i==a) {
      if(s[i] != '-') {
        yes = false;
        break;
      }
    } else {
      if(s[i] == '-') {
        yes = false;
        break;
      }
    }
  }

  if(yes) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}