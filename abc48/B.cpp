#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int a, b, x;
  cin >> a >> b >> x;

  long long int c = a / x + 1;
  long long int d = b / x;

  if(a % x == 0) {
    c = a / x;
  }

  cout << d - c + 1 << endl;
}