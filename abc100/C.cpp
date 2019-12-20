#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  for(int i=0;i<n;i++) {
    int a;
    cin >> a;
    int times = 0;
    while(a % 2 == 0) {
      a /= 2;
      times++;
    }
    ans += times;
  }

  cout << ans << endl;
}