#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string t = "AC";
  string::size_type pos = s.find(t);
  if(pos != string::npos) cout << "Yes" << endl;
  else cout << "No" << endl;
}