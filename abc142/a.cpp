#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  double a = N/2+1;
  double ans1 = 1.0/2.0;

  if(N % 2 == 0) {
    cout << ans1 << endl;
  } else {
    cout << a / N << endl;
  }
}