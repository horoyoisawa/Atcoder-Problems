#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  int disA = abs(x-a);
  int disB = abs(x-b);

  cout << ((disA<disB) ? "A" : "B") << endl;

  return 0;
}