#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<pair<int, double>> a(3);
  double total = 0;
  for(int i=0;i<3;i++) {
    cin >> a[i].first >> a[i].second;
    total += a[i].first * a[i].second / 10;
  }
  cout << total << endl;
}