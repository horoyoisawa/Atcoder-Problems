#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> rate(n);
  for(int i=0;i<n;i++) {
    cin >> rate[i];
  }

  sort(rate.begin(), rate.end());

  double takahashi = 0.0;
  for(int i=n-k;i<n;i++) {
    takahashi = (takahashi + rate[i]) / 2;
  }

  cout << setprecision(20) << takahashi << endl;
}