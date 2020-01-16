#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  bool c = false;
  bool f = false;

  for(int i=0;i<s.size();i++) {
    if(s[i] == 'C') c = true;
    if(c && s[i] == 'F') f = true;
  }

  if(c&&f) cout << "Yes" << endl;
  else cout << "No" << endl;
}