#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  int total = 0;
  cin >> a >> b;
  for(int i=0;i<2;i++) {
    if(a>b) {
      total += a;
      a--;
    } else {
      total += b;
      b--;
    }
  }

  cout << total << endl;
}