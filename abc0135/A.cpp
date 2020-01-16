#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  int half = (A + B) / 2;
  
  if(half * 2 == A + B) {
    cout << half << endl;
  } else {
    cout << "IMPOSSIBLE" << endl;
  }

  return 0;
}