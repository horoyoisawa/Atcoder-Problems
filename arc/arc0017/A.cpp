#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  bool prime = true;

  for(int i=2;i<n;i++) {
    if(n % i == 0) {
      prime = false;
      break;
    }
  }

  if(prime) cout << "YES" << endl;
  else cout << "NO" << endl;
}