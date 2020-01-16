#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, l;
  cin >> n >> l;
  int total = 1;
  int ans = 0;
  for(int i=0;i<n;i++) {
    char a;
    cin >> a;
    if(a == '+') {
      total++;
      if(total > l) {
        total = 1;
        ans++;
      }
    } else total--;
  }

  cout << ans << endl;
}