#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  if(k % 2 == 0) {
    long long int ans = 0;
    for(int i=1;k * i / 2 <= n; i++) {
      int a = k * i / 2;

      long long int num = (n - a) / k + 1;

      long long int total = num * (num + 1) / 2;

      ans += 1 + 3 * 2 * (num - 1) + 6 * (total - 2 * (num - 1) - 1);

    }

    cout << ans << endl;
  } else {
    long long int ans = 0;
    for(int i=2;k * i / 2 <= n; i+=2) {
      int a = k * i / 2;

      long long int num = (n - a) / k + 1;

      long long int total = num * (num + 1) / 2;

      ans += 1 + 3 * 2 * (num - 1) + 6 * (total - 2 * (num - 1) - 1);
    }

    cout << ans << endl;
  }
}