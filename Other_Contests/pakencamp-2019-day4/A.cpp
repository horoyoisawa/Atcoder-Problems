#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  if(n % 400 == 0) cout << n / 400 << endl;
  else cout << n / 400 + 1 << endl;
}