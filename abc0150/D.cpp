#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b) {
  if(a % b == 0) return b;
  else return gcd(b, a % b);
}

long long int lc(long long int a, long long int b) {
  return a / gcd(a, b) * b;
}

int times(long long int n) {
  int res = 0;
  while(n % 2 == 0) {
    n /= 2;
    res++;
  }
  return res;
}

int main() {
  int n, m;
  cin >> n >> m;

  vector<long long int> a(n);

  for(int i=0;i<n;i++) {
    int j;
    cin >> j;
    a[i] = j / 2;
  }

  long long int lcm = a[0];

  for(int i=1;i<n;i++) {
    if((lcm % 2 == 0 && a[i] % 2 == 1) || (lcm % 2 == 1 && a[i] % 2 == 0)) {
      lcm = 0;
      break;
    } 
    if(times(lcm) != times(a[i])) {
      lcm = 0;
      break;
    }
    lcm = lc(lcm, a[i]);
    if(lcm > m) {
      lcm = 0;
      break;
    }
  }

  int ans = 0;
  if(lcm == 0) ans = 0;
  else if((m/lcm)%2 == 1) ans = (m / lcm) / 2 + 1;
  else ans = (m / lcm) / 2;

  cout << ans << endl; 
}