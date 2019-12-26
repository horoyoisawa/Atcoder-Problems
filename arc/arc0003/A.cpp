#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  double total = 0.0;
  for(int i=0;i<n;i++) {
    char a;
    cin >> a;
    if(a == 'A') total += 4;
    else if(a == 'B') total += 3;
    else if(a == 'C') total += 2;
    else if(a == 'D') total += 1;
    else if(a == 'F') total += 0;
  }

  cout << setprecision(20) << total / n << endl;
}