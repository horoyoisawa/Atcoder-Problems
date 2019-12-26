#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int x;
  cin >> x;

  long long int total = 0;

  total += x / 11;

  x = x % 11;
  if(x == 0) {
    cout << 2 * total << endl;
  } else if(x <= 6) {
    cout << 2 * total + 1 << endl;
  } else {
    cout << 2 * total + 2 << endl;
  }
}