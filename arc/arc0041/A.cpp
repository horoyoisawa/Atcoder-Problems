#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  int k;
  cin >> x >> y >> k;
  if(k < y) cout << x + k << endl;
  else cout << x + y - (k - y) << endl;
}