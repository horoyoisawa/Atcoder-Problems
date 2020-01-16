#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  double max = 0.0;
  for(int i=0;i<n;i++) {
    int a, b, c, d;
    double e;
    cin >> a >> b >> c >> d >> e;
    double point = a + b + c + d + e * 110 / 900;
    if(point > max) max = point;
  }

  cout << setprecision(20) << max << endl;
}