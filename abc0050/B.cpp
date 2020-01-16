#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> t(n);
  int total = 0;
  for(int i=0;i<n;i++) {
    cin >> t[i];
    total += t[i];
  }
  int m;
  cin >> m;
  vector<pair<int, int>> drink(m);
  for(int i=0;i<m;i++) {
    cin >> drink[i].first >> drink[i].second;
    int time = t[drink[i].first-1];
    cout << total - time + drink[i].second << endl;
  }
}