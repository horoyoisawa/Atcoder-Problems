#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int k;
  cin >> s >> k;
  k %= s.size();
  string a = s.substr(0, k);
  string b = s.substr(k, s.size()-k);
  cout << b << a << endl;
}