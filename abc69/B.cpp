#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  for(int i=0;i<s.size();i++) {
    if(i == 0 || i == s.size()-1) {
      cout << s[i];
    } else if (i == s.size()-2) {
      cout << s.size() - 2;
    }
  }
  cout << endl;
}