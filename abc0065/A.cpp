#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  int deadLine = x + a;
  if(b <= a) {
    cout << "delicious" << endl;
  } else if (b <= deadLine) {
    cout << "safe" << endl;
  } else {
    cout << "dangerous" << endl;
  }
}