#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  bool plus = false;
  bool minus = false;

  if(a + b == c) plus = true;
  if(a - b == c) minus = true;

  if(plus&&minus) cout << '?' << endl;
  else if(plus&&!minus) cout << '+' << endl;
  else if(!plus&&minus) cout << '-' << endl;
  else cout << '!' << endl;
}