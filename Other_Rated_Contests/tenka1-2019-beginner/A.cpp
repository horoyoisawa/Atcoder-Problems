#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;

  cin >> a >> b >> c;

  if(min(a, b) < c &&  c < max(a, b)) cout << "Yes" << endl;
  else cout << "No" << endl;
}