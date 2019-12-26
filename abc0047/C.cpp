#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int start = 1;

  for(int i=1;i<s.size();i++) {
    if(s[i] == s[i-1]) start++;
    else break;
  }

  int end = s.size()-1;
  for(int i=s.size()-2;i>=0;i--) {
    if(s[i] == s[i+1]) end--;
    else break;
  }

  if(start == s.size()) {
    cout << 0 << endl;
  } else {
    int seqNum = 0;
    for(int i=start;i<end;i++) {
      if(s[i] == s[i-1]) continue;
      else seqNum++;
    }

    cout << seqNum + 1 << endl;
  }
}