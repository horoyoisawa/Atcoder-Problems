#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> S(n);
  for(int i=0;i<n;i++) cin >> S[i];

  string ans = S[0];

  for(int i=1;i<n;i++) {
    string result;
    sort(ans.begin(), ans.end());
    sort(S[i].begin(), S[i].end());
    set_intersection(ans.begin(), ans.end(), S[i].begin(), S[i].end(), back_inserter(result));

    ans = result;
  }

  sort(ans.begin(), ans.end());

  cout << ans << endl;
}