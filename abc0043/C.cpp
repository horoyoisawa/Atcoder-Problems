#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];
  int min = *min_element(a.begin(), a.end());
  int max = *max_element(a.begin(), a.end());
  int minCost = INT_MAX;
  for(int i=min;i<=max;i++) {
    int cost = 0;
    for(int j=0;j<n;j++) {
      cost += (i - a[j]) * (i - a[j]);
    }
    if(cost < minCost) minCost = cost;
  }

  cout << minCost << endl;
}