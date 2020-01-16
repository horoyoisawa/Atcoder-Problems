#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> count(26);
  string s;
  cin >> s;
  for(int i=0;i<s.size();i++) count[s[i]-'a']++;
  set<int> a(count.begin(), count.end());
  a.erase(0);
  cout << (a.size() == 1?"Yes":"No") << endl;
}