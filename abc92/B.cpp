#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, d, x;
  cin >> n >> d >> x;
  vector<int> a(n);
  for(int i=0;i<n;i++) {
    cin >> a[i];
  }

  vector<int> choko(n);

  for(int i=0;i<n;i++) {
    int total = 0;
    int times = 0;
    while(times * a[i] + 1 <= d) {
      total++;
      times++;
    }
    choko[i] = total;
  }

  int ans = 0;

  for(int i=0;i<n;i++) {
    ans += choko[i];
  }

  cout << ans + x << endl;
}