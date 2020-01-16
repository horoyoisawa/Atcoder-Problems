#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int a, b, c;

  long long int k;

  cin >> a >> b >> c >> k;

  if(abs(a-b) > pow(10, 18)) {
    cout << "Unfair" << endl; 
  } else {
    if(k % 2 == 0) cout << a - b << endl;
    else cout << b - a << endl;
  }
}