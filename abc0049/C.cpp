#include <bits/stdc++.h>
using namespace std;

int main() {
  string t;
  string s;
  cin >> s;
  bool yes = true;
  while(t.size()<s.size()) {
    int start = t.size();
    if(s[start] == 'd') {
      t += "dream";
    } else if (s[start] == 'e') {
      if(s.size()-t.size() == 1) {
        yes = false;
        break;
      } else if (s.size()-t.size() == 2) {
        t += "er";
      } else if (s.size()-t.size() >= 3) {
        if(s[start+2]=='a') {
          t += "erase";
        } else if(s[start+2]=='e') {
          t += "ererase";
        } else if(s[start+2]=='d') {
          t += "erdream";
        } else {
          yes = false;
          break;
        }
      } else {
        yes = false;
        break;
      }
    } else if (s[start] == 'r') {
      t += 'r';
    } else {
      yes = false;
      break;
    }
  }

  if(s != t) yes = false;
  if(yes) cout << "YES" << endl;
  else cout << "NO" << endl;
}