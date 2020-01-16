#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  bool ac = true;
  if(s[0] != 'A') {
    ac = false;
  }

  int numC = 0;
  for(int i=1;i < s.size();i++) {
    if(i >= 2 && i <= s.size()-2) {
      if(s[i] == 'C') {
        numC++;
        continue;
      }
    }
    if((s[i] < 'a') || (s[i] > 'z')) {
      ac = false;
      break;
    }
  }

  if(numC != 1) {
    ac = false;
  }

  if(ac) {
    cout << "AC" << endl;
  } else {
    cout << "WA" << endl;
  }
}