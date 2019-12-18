#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string ans = "";
  int length = 0;
  for(int i=0;i<s.size();i++) {
    length++;
    if(i == s.size()-1) {
      ans = ans + s[i] + to_string(length);
      continue;
    }
    if(s[i] == s[i+1]) continue;
    else {
      ans = ans + s[i] + to_string(length);
      length = 0;
    }
  }

  cout << ans << endl;
}