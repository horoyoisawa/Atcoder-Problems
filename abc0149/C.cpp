#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin >> x;
  int ans = 0;
  for(int i=x;i<=pow(10, 7);i++) {
    bool prime = true;
    for(int j=2;j<x;j++) {
      if(i % j==0) {
        prime = false;
        break;
      }
    }
    if(prime) {
      ans = i;
      break;
    }
  }

  cout << ans << endl;
}