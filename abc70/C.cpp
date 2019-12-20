#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b) {
    if(a>b) {
      if(a%b==0) return b;
      else return gcd(b, a%b);
    } else {
      if(b%a==0) return a;
      else return gcd(a, b%a);
    }
  }

int main() {
  int n;

  cin >> n;
  long long int ans = 0;
  for(int i=0;i<n;i++) {
    if(i==0) cin >> ans;
    else {
      long long int t;
      cin >> t;
      ans = t / gcd(ans, t) * ans;
    }
  }

  cout << ans << endl;
}