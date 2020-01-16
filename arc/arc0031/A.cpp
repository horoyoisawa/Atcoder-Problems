#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string t = s;
  reverse(t.begin(), t.end());
  if(t == s) cout << "YES" << endl;
  else cout << "NO" << endl;
}