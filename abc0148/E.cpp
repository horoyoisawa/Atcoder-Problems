#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int n;
  cin >> n;
  long long int total = 0;
  for(int i=1;;i++) {
    long long int m = n / 2 / pow(5, i);
    if(m == 0) break;
    else total += m;
  }

  cout << total << endl;
}