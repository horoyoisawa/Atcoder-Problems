#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> time(n);
  cin >> time[0] >> time[1];
  int ans = -1;
  for(int i=2;i<n;i++) {
    cin >> time[i];
    if(time[i]+time[i-1]+time[i-2] < k) {
      ans = i + 1;
      break;
    }
  }
  cout << ans << endl;
}