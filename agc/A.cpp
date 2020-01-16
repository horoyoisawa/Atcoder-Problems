#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int a = LLONG_MAX;

  int times = 0;
  while( a > 10) {
    a /= 10;
    times++;
  }

  cout << a << " * " << "10^" << times << endl; 
}