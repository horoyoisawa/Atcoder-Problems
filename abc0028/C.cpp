#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> vec(5);
  for(int i=0;i<5;i++) cin >> vec[i];

  vector<int> ans(0);
  for(int i=0;i<5;i++) {
    for(int j=i+1;j<5;j++) {
      for(int k=j+1;k<5;k++) {
        ans.push_back(vec[i]+vec[j]+vec[k]);
      }
    }
  }
  sort(ans.begin(), ans.end());

  cout << ans[7] << endl;
}