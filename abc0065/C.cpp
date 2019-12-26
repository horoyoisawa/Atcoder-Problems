#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  const int mod = 1e9 + 7;

  int bigger = max(n, m);
  int smaller = min(n, m);
  vector<long long int> fact(bigger+1, 0);
  fact[0] = 1;
  for(long long int i=1;i<=bigger;i++) {
    fact[i] = (fact[i-1] * i) % mod;
  }
  if(bigger - smaller > 1) cout << 0 << endl;
  else if (bigger - smaller == 1) {
    cout << fact[bigger] * fact[smaller] % mod << endl;
  } else {
    cout << fact[bigger] * fact[smaller] * 2 % mod << endl;
  }
}