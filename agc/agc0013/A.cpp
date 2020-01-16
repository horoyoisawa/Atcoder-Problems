#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string state = "neutral";
  vector<int> a(n);
  cin >> a[0];

  int ans = 0;
  for(int i=1;i<n;i++) {
    cin >> a[i];
    if(state == "neutral") {
      if(a[i] - a[i-1] > 0) state = "up";
      else if(a[i] - a[i-1] < 0) state = "down";
    } else {
      if(state == "up" && a[i] < a[i-1]) {
        ans++;
        state = "neutral";
      }
      else if(state == "down" && a[i] > a[i-1]) {
        ans++;
        state = "neutral";
      }
    }
  }

  cout << ans + 1 << endl;
}