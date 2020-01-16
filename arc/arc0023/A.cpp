#include <bits/stdc++.h>
using namespace std;

int days(int y, int m, int d) {
  return 365 * y + floor(y/4) - floor(y/100) + floor(y/400) + floor(306*(m+1)/10) + d - 429;
}
int main() {
  int y, m, d;
  cin >> y >> m >> d;
  if(m == 1 || m == 2) {
    y--;
    m += 12;
  }

  cout << days(2014, 5, 17) - days(y, m, d) << endl;
}