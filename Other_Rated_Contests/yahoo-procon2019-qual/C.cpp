#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int k, a, b;
  cin >> k >> a >> b;
  
  k -= (a - 1);
  long long int ans = a;

  if((b - a) > 2) {
    if(k % 2 == 0) ans += (b - a) * (k / 2);
    else ans += (b - a) * (k / 2) + 1;
  } else {
    ans += k;
  }

  cout << ans << endl;
}