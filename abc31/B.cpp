#include <bits/stdc++.h>
using namespace std;

int main() {
  int l, h;
  int n;
  cin >> l >> h >> n;

  for(int i=0;i<n;i++) {
    int a;
    cin >> a;
    if(a > h) cout << -1 << endl;
    else if(a >= l) cout << 0 << endl;
    else cout << l - a << endl;
  }
}