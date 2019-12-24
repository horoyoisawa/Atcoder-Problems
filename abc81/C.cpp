#include <bits/stdc++.h>
using namespace std;

bool Compare(const pair<int, int> &a, const pair<int, int> &b) {
  return (a.second > b.second);
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  vector<int> count(n+1, 0);
  for(int i=0;i<n;i++) count[a[i]]++;
  sort(count.rbegin(), count.rend());
  int same = 0;
  for(int i=0;i<k;i++) {
    same += count[i];
  }

  cout << n - same << endl;
}