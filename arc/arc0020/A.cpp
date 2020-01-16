#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  if(abs(a) == abs(b)) cout << "Draw" << endl;
  else if(abs(a) > abs(b)) cout << "Bug" << endl;
  else cout << "Ant" << endl;
}