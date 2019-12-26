#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int west = 0;
  int east = 0;
  for(int i=0;i<n;i++) {
    if(s[i] == 'W') west++;
    else east++;
  }

  vector<int> ans(n);

  for(int i=0;i<n;i++) {
    if(i==0) {
      if(s[i] == 'W') ans[i] = east;
      else ans[i] = east - 1; 
    } else {
      if(s[i-1] == 'W') {
        if(s[i] == 'E') ans[i] = ans[i-1];
        else ans[i] = ans[i-1] + 1;
      } else {
        if(s[i] == 'E') ans[i] = ans[i-1] - 1;
        else ans[i] = ans[i-1];
      }
    }
  }

  int min = *min_element(ans.begin(), ans.end());

  cout << min << endl;
}