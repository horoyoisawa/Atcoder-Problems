#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  string t;

  cin >> s >> t;

  bool win = true;

  vector<int> at = {'a', 't', 'c', 'o', 'd', 'e', 'r'};

  for(int i=0;i<s.size();i++) {
    if(s[i] == t[i]) {
      continue;
    }
    if(s[i] == '@') {
      bool exist = false;
      for(int j=0;j<at.size();j++) {
        if(at[j] == t[i]) {
          exist = true;
          break;
        }
      }
      if(exist) {
        continue;
      } else {
        win = false;
        break;
      }
    }

    if(t[i] == '@') {
      bool exist = false;
      for(int j=0;j<at.size();j++) {
        if(at[j] == s[i]) {
          exist = true;
          break;
        }
      }
      if(exist) {
        continue;
      } else {
        win = false;
        break;
      }
    }

    win = false;
    break;
  }

  if(win) {
    cout << "You can win" << endl;
  } else {
    cout << "You will lose" << endl;
  }
}