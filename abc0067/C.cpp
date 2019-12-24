#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> card(n);
  long long int total = 0;
  for(int i=0;i<n;i++) {
    cin >> card[i];
    total += card[i];
  }

  long long int x = 0;
  long long int ans = LLONG_MAX;

  for(int i=0;i<n-1;i++) {
    x += card[i];
    long long int y = total - x;

    if(abs(x-y)<ans) ans = abs(x-y);
  }

  cout << ans << endl;
}