#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int lengthS = 0;
  int lengthT = 0;
  bool T = true;
  if(s[0] == 'S') {
    lengthS++;
    T = false;
  }
  if(s[0] == 'T') lengthT++;
  int ans = 0;
  for(int i=1;i<s.size();i++) {
    if(!T && s[i] == 'S') lengthS++;
    else if(T && s[i] == 'S') {
      if(lengthS > lengthT) {
        lengthS -= lengthT;
      }
      else {
        ans += lengthT - lengthS;
        lengthS = 0;
      }
      
      lengthS++;
      lengthT = 0;
      T = false;
    } else if(s[i] == 'T') {
      if(!T) T = true;
      lengthT++;
    }
  }

  ans += abs(lengthS - lengthT);

  cout << ans << endl;
}