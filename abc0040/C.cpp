#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  vector<int> minCost(n);
  for(int i=0;i<n;i++) cin >> a[i];

  minCost[0] = 0;
  minCost[1] = abs(a[1]-a[0]);

  for(int i=2;i<n;i++) {
    minCost[i] = min(minCost[i-2]+abs(a[i]-a[i-2]), minCost[i-1]+abs(a[i]-a[i-1]));
  }

  cout << minCost[n-1] << endl;
}