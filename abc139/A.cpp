#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  string t;
  cin >> s >> t;

  int total = 0;

  if(s[0] == t[0]) {
    total++;
  }
  if(s[1] == t[1]) {
    total++;
  }
  if(s[2] == t[2]) {
    total++;
  }

  cout << total << endl;

  return 0;
}