#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, k;
  cin >> a >> b >> k;
  for(int i=a;i<a+k;i++) {
    if(i > b) {
      break;
    }
    cout << i << endl;
  }
  vector<int> ans(0);
  for(int i=b;i>b-k;i--) {
    if(i < a + k) {
      break;
    } else {
      ans.push_back(i);
    }
  }

  for(int i=ans.size()-1;i>=0;i--) {
    cout << ans[i] << endl;
  }
}