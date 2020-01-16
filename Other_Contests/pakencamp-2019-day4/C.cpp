#include <bits/stdc++.h>
using namespace std;

int main() {
  int l1, r1, l2, r2, l3, r3;
  cin >> l1 >> r1 >> l2 >> r2 >> l3 >> r3;

  double total = 0.0;

  for(int i=l1;i<=r1;i++) {
    if(r2 <= i || r3 <= i) continue;
    else {
      double b = min((double)(r2 - i) / (r2 - l2 + 1), 1.0);
      double c = min((double)(r3 - i) / (r3 - l3 + 1), 1.0);
      total += b * c;
    }
  }

  cout << setprecision(20) << total / (r1 - l1 + 1) << endl;
}