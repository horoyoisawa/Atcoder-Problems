#include <bits/stdc++.h>
using namespace std;

int main() {
  bool yes = false;

  string s, t;
  cin >> s >> t;

  for(int i=0;i<s.size();i++) {
    if(s == t) {
      yes = true;
      break;
    }

    s.insert(0, 1, s[s.size()-1]);
    s.pop_back();
  }

  if(yes) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}