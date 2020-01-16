#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  bool yes = false;

  for(int i=0;i<=7;i++) {
    string begin = s.substr(0, i);
    string end = s.substr(s.size()- 7 + i, 7 - i);

    string key = "keyence";
    string keyBegin = key.substr(0, i);
    string keyEnd = key.substr(i, 7 - i);

    if(begin == keyBegin && end == keyEnd) {
      yes = true;
      break;
    }
  }

  cout << (yes ? "YES" : "NO") << endl;
}