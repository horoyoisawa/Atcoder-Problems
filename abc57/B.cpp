#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<pair<int, int>> student(n);
  vector<pair<int, int>> check(m);

  for(int i=0;i<n;i++) {
    cin >> student[i].first;
    cin >> student[i].second;
  }

  for(int i=0;i<m;i++) {
    cin >> check[i].first;
    cin >> check[i].second;
  }

  vector<int> ans(n);

  for(int i=0;i<n;i++) {
    int min = 1e9;
    int checkPoint = 0;
    for(int j=0;j<m;j++) {
      int dis = abs(student[i].first-check[j].first)+abs(student[i].second-check[j].second);
      if(dis < min) {
        min = dis;
        checkPoint = j + 1;
      }
    }

    ans[i] = checkPoint;
  }

  for(int i=0;i<n;i++) {
    cout << ans[i] << endl;
  }
}