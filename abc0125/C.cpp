#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) { return((a%b==0?b:gcd(b,a%b))); }
int main() {
  int n;
  cin >> n;
  vector<int> a(n);

  for(int i=0;i<n;i++) cin >> a[i];

  vector<int> gcd_1(n);
  vector<int> gcd_2(n);
  gcd_1[0] = a[0];
  gcd_2[0] = a[n-1];
  for(int i=1;i<n;i++) {
    gcd_1[i] = gcd(gcd_1[i-1], a[i]);
    gcd_2[i] = gcd(gcd_2[i-1], a[n-i-1]);
  }

  int ans = 0;

  for(int i=0;i<n;i++) {
    int g = 0;
    if(i == 0) g = gcd_2[n-2];
    else if(i == n-1) g = gcd_1[n-2];
    else {
      g = gcd(gcd_1[i-1], gcd_2[n-i-2]);
    }

    if(g > ans) ans = g;
  }

  cout << ans << endl;
}