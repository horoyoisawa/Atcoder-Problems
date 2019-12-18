#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  int a = x - 1;
  int b = n - x;
  if(a<b) {
    cout << a << endl;
  } else {
    cout << b << endl;
  }
}