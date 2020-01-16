#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int a, b, c;
  cin >> a >> b >> c;
  if( c > a + b + 1 ) {
    cout << a + (b * 2) + 1 << endl;
  } else {
    cout << b + c << endl;
  }
}