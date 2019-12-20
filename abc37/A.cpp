#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  if(a<b) {
    cout << c / a << endl;
  } else {
    cout << c / b << endl;
  }
}