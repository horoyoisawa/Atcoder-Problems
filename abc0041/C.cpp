#include <bits/stdc++.h>
using namespace std;

bool custom(const pair<int, int> &a, const pair<int, int> &b) {
  return (a.second > b.second);
}

int main() {
  int N;
  cin >> N;
  vector<pair<int, int>> a(N);
  for(int i=0;i<N;i++) {
    a[i].first = i+1;
    cin >> a[i].second;
  }

  sort(a.begin(), a.end(), custom);

  for(int i=0;i<N;i++) {
    cout << a[i].first << endl;
  }
}