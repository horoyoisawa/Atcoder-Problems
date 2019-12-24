#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int n, m;
  cin >> n >> m;

  if(n > m / 2) {
    cout << m / 2 << endl;
  } else {
    long long int remainder = m - 2 * n;
    cout << n + remainder / 4 << endl;
  }
}