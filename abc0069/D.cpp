#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  int n;
  cin >> n;
  vector<vector<int>> ans(h, vector<int>(w));
  vector<int> input(h*w);
  int total = 0;
  for(int i=1;i<=n;i++) {
    int a;
    cin >> a;
    for(int j=total;j<total+a;j++) {
      input[j] = i;
    }
    total += a;
  }

  for(int i=0;i<h;i++) {
    for(int j=0;j<w;j++) {
      ans[i][j] = input[i*w+j];
    }
  }

  for(int i=1;i<h;i+=2) {
    reverse(ans[i].begin(), ans[i].end());
  }

  for(int i=0;i<h;i++) {
    for(int j=0;j<w;j++) {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
}