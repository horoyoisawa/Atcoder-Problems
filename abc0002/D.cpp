#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<bool>> know(n+1, vector<bool>(n+1, false));

  for(int i=0;i<m;i++) {
    int a, b;
    cin >> a >> b;

    know[a][b] = true;
    know[b][a] = true;
  }

  int ans = 0;

  for(int i=0;i<pow(2, n);i++) {
    bitset<12> member(i);
    vector<int> memberNow;
    for(int j=0;j<member.size();j++) {
      if(member[j] == 1) memberNow.push_back(j+1);
    }
    bool can = true;
    for(int j=0;j<memberNow.size();j++) {
      for(int k=j+1;k<memberNow.size();k++) {
        if(know[memberNow[j]][memberNow[k]]) continue;
        else {
          can = false;
          break;
        }
      }
    }

    if(can && ans < memberNow.size()) ans = memberNow.size();
  }
  cout << ans << endl;
}