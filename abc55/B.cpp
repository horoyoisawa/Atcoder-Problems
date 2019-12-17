#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int main() {
  int N;
  cin >> N;
  long long int ans = 1;
  for(int i=1;i<=N;i++) {
    ans *= i;
    ans = ans % mod;
  }

  cout << ans << endl;
}