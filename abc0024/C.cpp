#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;
int main() {
  int n, d, k;
  cin >> n >> d >> k;
  vector<P> free(d);
  vector<P> sg(k);
  for(int i=0;i<d;i++) cin >> free[i].first >> free[i].second;
  for(int i=0;i<k;i++) cin >> sg[i].first >> sg[i].second;

  for(int i=0;i<k;i++) {
    pair<int, int> range = make_pair(sg[i].first, sg[i].first);
    int ans = 0;
    for(int j=0;j<d;j++) {
      if(min(free[j].second, range.second) - max(free[j].first, range.first) >= 0) {
        range.second = max(free[j].second, range.second);
        range.first = min(free[j].first, range.first);
      }
      if(range.first <= sg[i].second && sg[i].second <= range.second) {
        ans = j+1;
        break;
      }
    }

    cout << ans << endl;
  }
}