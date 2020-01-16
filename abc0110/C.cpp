#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  string t;

  cin >> s >> t;
  vector<int> a(26);
  vector<int> b(26);

  for(int i=0;i<s.size();i++) {
    int c = s[i] - 'a';
    int d = t[i] - 'a';

    a[c]++;
    b[d]++;
  }

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  if(a == b) cout << "Yes" << endl;
  else cout << "No" << endl;
}