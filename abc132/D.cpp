#include "../bits/stdc++.h"
using namespace std;

const int MAX = 5000;
const int MOD = 1e9 + 7;

long long fac[MAX], finv[MAX], inv[MAX];

void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main() {
  int n, k;
  cin >> n >> k;

  for(int i=1;i<=k;i++) {
    COMinit();
    cout << COM(n-k+1, i) << endl;
  }

  return 0;
}