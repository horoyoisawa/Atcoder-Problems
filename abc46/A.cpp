#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int same = 0;
  if(a==b) same++;
  if(b==c) same++;
  if(c==a) same++;

  if(same==3) {
    cout << 1 << endl;
  } else if (same == 1) {
    cout << 2 << endl;
  } else {
    cout << 3 << endl;
  }
}