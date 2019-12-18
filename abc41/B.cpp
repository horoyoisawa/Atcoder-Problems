#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int a, b, c;
  cin >> a >> b >> c;
  const int mod = 1e9 + 7;

  cout << ((a*b)%mod*c)%mod << endl;
}