#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, D;
  long long int x;
  cin >> r >> D >> x;

  for(int i=1;i<=10;i++) {
    x = r * x - D;
    cout << x << endl;
  }
}