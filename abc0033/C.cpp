#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  s += '+';
  bool zeroExist = false;
  int ans = 0;
  for(int i=0;i<s.size()-1;i+=2) {
    if(s[i] == '0') zeroExist = true;
    if(s[i+1] == '*') continue;
    else if(s[i+1] == '+') {
      if(!zeroExist) {
        ans++;
      }

      zeroExist = false;
    }
  }

  cout << ans << endl;  
}