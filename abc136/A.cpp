#include <bits/stdc++.h>
using namespace std;

int main() {
  int A;
  int B;
  int C;

  cin >> A >> B >> C;

  int ans = C - (A - B);

  if(ans < 0) {
    cout << 0 << endl;
  } else {
    cout << ans << endl;
  }
}