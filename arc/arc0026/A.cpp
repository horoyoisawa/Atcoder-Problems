#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int a;
  int b;
  cin >> n >> a >> b;

  if(n > 5) {
    cout << b * 5 + a * (n - 5) << endl;
  } else {
    cout << b * n << endl;
  }
}