#include <bits/stdc++.h>
using namespace std;

bool custom(pair<int, int> a, pair<int, int> b) {
  return (a.second > b.second);
}
int main() {
  int n, m;
  cin >> n >> m;
  vector<long long int> A(n);
  long long int total = 0;
  for(int i=0;i<n;i++) {
    cin >> A[i];
    total += A[i];
  }
  sort(A.begin(), A.end());
  vector<pair<int, int>> BC(m);

  for(int i=0;i<m;i++) cin >> BC[i].first >> BC[i].second;

  sort(BC.begin(), BC.end(), custom);
  int index = 0;
  for(int i=0;i<m;i++) {
    int length = 0;
    for(int j = index; j < n; j++) {
      if(length == BC[i].first) break;
      if(A[j] < BC[i].second) {
        total += BC[i].second - A[j];
        length++;
      }
      else break;
    }
    if(length != BC[i].first) break;
    else index += length;
  }

  cout << total << endl;
}