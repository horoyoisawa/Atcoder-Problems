#include <bits/stdc++.h>
using namespace std;

int main() {
  const double PI = acos(-1);

  int total = 0;
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0;i<n;i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  if(n % 2 == 0) {
    for(int i=n-1;i>=0;i--) {
      if(i % 2 == 0) total -= a[i] * a[i];
      else total += a[i] * a[i];
    }
  } else {
    for(int i=0;i<n;i++) {
      if(i % 2 == 0) total += a[i] * a[i];
      else total -= a[i] * a[i];
    }
  }

  cout << setprecision(20) << total * PI << endl;
}