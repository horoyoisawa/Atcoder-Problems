#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  bool num = true;

  for(int i=0;i<s.size();i++) {
    if(s[i] - '0' > 9) {
      num = false;
      break;
    }
  }

  if(num) cout << stoi(s) * 2 << endl;
  else cout << "error" << endl;
}