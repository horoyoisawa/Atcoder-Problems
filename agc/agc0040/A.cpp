#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int start = 0;
  long long int length1 = 0;
  long long int length2 = 0;
  long long int ans = 0;

  if(s[s.size()-1] == '>') s += '<';
  else s += '>';

  for(int i = 0; i < s.size() - 1; i++) {

    if(s[i] == s[i+1]) continue;
    else {
      if(s[i+1] == '>') {
        length1 = i + 1 - start;
        start = i + 1;
        if(i == s.size() - 2) {
          ans += length1 * (length1 + 1) / 2;
          break;
        }
      } else {
        length2 = i + 1 - start;
        start = i + 1;
        if(length1 > length2) ans += length1 * (length1 + 1) / 2 + length2 * (length2 - 1) / 2;
        else ans += length1 * (length1 - 1) / 2 + length2 * (length2 + 1) / 2;
      }
    }
  }

  cout << ans << endl;
}