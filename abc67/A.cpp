#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  bool possible = false;
  if(a % 3 == 0 || b % 3 == 0 || (a+b) % 3 == 0) {
    possible = true;
  }
  if(possible) {
    cout << "Possible" << endl;
  } else {
    cout << "Impossible" << endl;
  }
}