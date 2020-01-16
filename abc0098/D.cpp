#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int main() {
  int n;
  cin >> n;
  vector<long long int> A(n);
  rep(i, n) cin >> A[i];

  long long int total = 0;
  long long int ans = 0;
  int start = 0;

  for(int i=0;i<n;i++) {
    if(start == n) {
      ans += n - i;
      continue;
    }
    for(int j=start;j<n;j++) {
      if(total + A[j] == (total ^ A[j])) {
        total += A[j];
      } else {
        start = j;
        ans += j - i;
        total -= A[i];
        break;
      }

      if(j == n-1) {
        ans += n - i;
        start = n;
      }
    }
  }

  cout << ans << endl;
}