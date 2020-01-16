#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int q, h, s, d;
  long long int n;
  cin >> q >> h >> s >> d >> n;

  long long int half = min(2 * q, h);
  long long int one = min(half * 2, s);
  long long int two = min(one * 2, d);

  cout << two * (n / 2) + one * (n % 2) << endl;
}