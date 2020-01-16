#include <bits/stdc++.h>
using namespace std;

int main() {
  bool i = false;
  bool c = false;
  bool t = false;
  string s;
  cin >> s;
  for(int j=0;j<s.size();j++) {
    if(s[j] == 'i' || s[j] == 'I') i = true;
    if(i && (s[j] == 'c' || s[j] == 'C')) c = true;
    if(i && c && (s[j] == 't' || s[j] == 'T')) t = true;
  }

  if(i&&c&&t) cout << "YES" << endl;
  else cout << "NO" << endl;
}