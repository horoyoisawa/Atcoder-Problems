#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, g, b;
  cin >> r >> g >> b;

  int a = r * 100 + g * 10 + b;
  if(a % 4 == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}