#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a = n / 10;
  int b = n % 10;
  if(b > 6) {
    cout << 100 * a + 100 << endl;
  } else {
    cout << 100 * a + b * 15 << endl;
  }
}