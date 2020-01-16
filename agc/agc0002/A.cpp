#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  if(a < 0 && b < 0) {
    if((b - a) % 2 == 0) cout << "Negative" << endl;
    else cout << "Positive" << endl;
  } else if(a < 0 && b >= 0) {
    cout << "Zero" << endl;
  } else {
    cout << "Positive" << endl;
  }
}