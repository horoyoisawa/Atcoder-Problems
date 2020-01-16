#include <bits/stdc++.h>
using namespace std;

const int mod = pow(10, 9) + 7;

int main() {
  long long int n;
  cin >> n;
  vector<long long int> A(n);
  long long int total = 0;
  for(int i=0;i<n;i++) {
    cin >> A[i];
    total += (A[i] % mod);
    total %= mod;
  }

  long long int minus = 0;

  for(int k=0; k<60;k++) {
    long long int l = 0;
    for(int i=0;i<n;i++) {
      bitset<60> B(A[i]);
      if(B.test(k)) l++;
    }
    
    minus += (((long long int)pow(2, k+1) % mod) * ((l * (l-1) / 2) % mod)) % mod;
    minus %= mod;
  }

  int ans = ((total * (n-1)) % mod - minus) % mod;

  if(ans < 0) cout << ans + mod << endl;
  else cout << ans << endl;
}