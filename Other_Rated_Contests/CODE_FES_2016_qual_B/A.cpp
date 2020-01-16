#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string expected = "CODEFESTIVAL2016";
  int ans = 0;
  for(int i=0;i<s.size();i++) {
    if(s[i] != expected[i]) ans++;
  }

  cout << ans << endl;
}