#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int ans = 0;

  while(n != 0) {
    if(n % 10 == 2) ans++;

    n /= 10;
  }

  cout << ans << endl;
}