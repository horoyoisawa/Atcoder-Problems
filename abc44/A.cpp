#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, x, y;
  cin >> n >> k >> x >> y;
  if(n>k) {
    cout << x * k + y * (n - k) << endl;
  } else {
    cout << x * k << endl;
  }
}