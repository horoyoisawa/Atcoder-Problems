#include <bits/stdc++.h>
using namespace std;

int main() {
  char a, b;
  cin >> a >> b;
  int s = 0;
  int t = 0;

  if (a == 'H') {
    s = 1;
  } else {
    s = -1;
  }

  if (b == 'H') {
    t = 1;
  } else {
    t = -1;
  }

  if(s * t == 1) {
    cout << 'H' << endl;
  } else {
    cout << 'D' << endl;
  }
}