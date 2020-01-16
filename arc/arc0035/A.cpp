#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  bool yes = true;
  for(int i=0;i<s.size()/2;i++) {
    if(s[i] == s[s.size()-1-i]) continue;
    else {
      if(s[i] == '*' || s[s.size()-1-i] == '*') continue;
      else {
        yes = false;
        break;
      }
    }
  }

  if(yes) cout << "YES" << endl;
  else cout << "NO" << endl;
}