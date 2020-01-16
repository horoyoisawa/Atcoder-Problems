#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> card(n);
  for(int i=0;i<n;i++) cin >> card[i];

  sort(card.begin(), card.end());

  int ans = 0;
  for(int i=n-1;i>=0;i-=2) {
    ans += card[i];
  }

  cout << ans << endl;
}