#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int a, b, k;

  cin >> a >> b >> k;

  if(a > k) {
    cout << a - k << " " << b << endl;
  } else if (a + b - k > 0){
    cout << 0 << " " << a + b - k << endl;
  } else {
    cout << 0 << " " << 0 << endl;
  }
}