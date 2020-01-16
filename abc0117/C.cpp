#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<long long int> point(m);
  for(int i=0;i<m;i++) cin >> point[i];
  sort(point.begin(), point.end());

  if(n == 1) {
    cout << point[m-1] - point[0] << endl;
  } else {
    if(n >= m) {
      cout << 0 << endl;
    } else {
      vector<long long int> distance(m-1);
      for(int i=0;i<m-1;i++) {
        distance[i] = point[i+1] - point[i];
      }
    
      sort(distance.begin(), distance.end());

      long long int total = 0;
      for(int i=0;i<n-1;i++) {
        total += distance[m-2-i];
      }

      long long int ans = point[m-1] - point[0] - total;

      cout << ans << endl;
    }
  }
}
