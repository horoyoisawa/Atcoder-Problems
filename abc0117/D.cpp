#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  long long int k;

  cin >> n >> k;

  vector<long long int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  long long int x = 0;
  long long int ans = 0;

  for(int i=63;i>=0;i--) {
    int zero = 0;
    for(int j=0;j<a.size();j++) {
      bitset<64> value(a[j]);
      if(!value.test(i)) zero++;
    }

    if(zero > (a.size() - zero) && x <= k - pow(2, i)) {
      x += pow(2, i);
      ans += pow(2, i) * zero;
    } else {
      ans += pow(2, i) * (a.size() - zero);
    }
  }

  cout << ans << endl;
}