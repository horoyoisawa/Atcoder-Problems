#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans1 = 1e5;
  for(int i=1;i<=sqrt(n);i++) {
    int w = n / i;
    int remainder = n % i;

    if(abs(w-i)+remainder<ans1) ans1 = abs(w-i)+remainder;
  }

  cout << ans1 << endl;
}