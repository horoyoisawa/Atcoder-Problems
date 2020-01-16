#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  long long int k;
  cin >> n >> k;
  vector<int> a(n);
  for(int i=0;i<n;i++) {
    cin >> a[i];
  }
  long long int total = 0;
  long long int ans = 0;
  int start = 0;
  int end = 0;
  while(start != n) {
    if(total < k) {
      if(end == n) {
        break;
      }
      total += a[end];
      end++;
    } else {
      ans += n - end + 1;
      total -= a[start];
      start++;
    }
  }

  cout << ans << endl;
}