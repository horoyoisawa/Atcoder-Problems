#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int black = 0;
  for(int i=0;i<s.size();i++) {
    if(s[i] == 'B') black++;
  }

  int index = 0;
  long long int ans = 0;
  for(int i=0;i<s.size();i++) {
    if(s[i] == 'B') {
      ans += s.size() - black + index - i;
      index++;
    }
  }

  cout << ans << endl;
}