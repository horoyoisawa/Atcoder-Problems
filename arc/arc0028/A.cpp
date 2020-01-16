#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;

  int c = n % (a + b);
  if(c == 0) cout << "Bug" << endl;
  else if(c <= a) cout << "Ant" << endl;
  else cout << "Bug" << endl;
}