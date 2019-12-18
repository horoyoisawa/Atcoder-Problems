#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int dis = abs(b-a);
  if(dis<5) {
    cout << dis << endl;
  } else {
    cout << 10 - dis << endl;
  }
}