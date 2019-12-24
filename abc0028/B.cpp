#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  vector<int> ans(6);

  for(int i=0;i<s.size();i++) {
    if(s[i] == 'A') ans[0]++;
    else if(s[i] == 'B') ans[1]++;
    else if(s[i] == 'C') ans[2]++;
    else if(s[i] == 'D') ans[3]++;
    else if(s[i] == 'E') ans[4]++;
    else ans[5]++;
  }

  for(int i=0;i<6;i++) {
    cout << ans[i];
    if(i != 5) cout << " ";
  }

  cout << endl;
}