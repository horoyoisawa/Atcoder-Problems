#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int n, a, b;
  cin >> n >> a >> b;

  if(abs(a-b) % 2 == 0) cout << abs(a - b) / 2 << endl;
  else {
    cout << min(a - 1, n - b) + 1 + (b - a - 1) / 2 << endl;
  }
}