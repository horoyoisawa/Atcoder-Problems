#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int n, a, b;
  cin >> n >> a >> b;

  if(a > b || (n == 1 && a != b)) cout << 0 << endl;
  else {
  long long int lowLim = a * (n - 1) + b;
  long long int highLim = b * (n - 1) + a;

  cout << highLim - lowLim + 1 << endl;
  }
}