#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  double total = 0;
  vector<int> a(n);
  for(int i=0;i<n;i++) {
    cin >> a[i];
    total += a[i];
  }

  double average = total / n;

  int ans = 0;
  double minD = 1000000.0;

  for(int i=0;i<n;i++) {
    if(abs(average-a[i]) < minD) {
      minD = abs(average-a[i]);
      ans = i;
    }
  }

  cout << ans << endl;
}