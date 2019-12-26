#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  if(s.size() < t.size()) cout << "UNRESTORABLE" << endl;
  else {
    vector<string> ans(0);
    for(int i=0;i<=s.size()-t.size();i++) {
      string sub = s.substr(i, t.size());
      string result = s;
      for(int j=0;j<sub.size();j++) {
        if(sub[j] == '?') sub[j] = t[j];
      }
      if(sub == t) {
        for(int j=0;j<i;j++) {
          if(s[j] == '?') result[j] = 'a';
        }
        for(int j=i;j<i+t.size();j++) {
          result[j] = t[j-i];
        }
        for(int j=i+t.size();j<s.size();j++) {
          if(s[j] == '?') result[j] = 'a';
        }

        ans.push_back(result);
      }
    }

    if(ans.size()==0) {
      cout << "UNRESTORABLE" << endl;
    } else {
      sort(ans.begin(), ans.end());
      cout << ans[0] << endl;
    }
  }
}