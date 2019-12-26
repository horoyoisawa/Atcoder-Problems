#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << setprecision(50) << LLONG_MAX << endl;
  int times = 1;
  long long int C = LLONG_MAX;
  while(C != 0) {
    C /= 10;
    times++;
  }
  cout << times << endl;
}