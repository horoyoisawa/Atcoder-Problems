#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, h;
  cin >> n >> h;
  vector<int> A(n);
  vector<int> B(n);
  for(int i = 0; i < n; i++) {
    cin >> A[i];
    cin >> B[i];
  }

  int maxA = *max_element(A.begin(), A.end());

  sort(B.begin(), B.end());

  int total = 0;

  int ans = 0;

  for(int i=0;i<n;i++) {
    if(B[n-1-i] >= maxA) {
      total += B[n-1-i];
    } else {
      ans += i;
      break;
    }

    if(total >= h) {
      ans += i + 1;
      break;
    }

    if(i == n-1) ans += i + 1;
  }

  if(total >= h) cout << ans << endl;
  else {
    if((h - total) % maxA == 0) cout << ans + (h - total) / maxA << endl;
    else cout << ans +(h - total) / maxA + 1 << endl;
  }
}